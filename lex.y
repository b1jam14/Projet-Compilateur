%{
#include <stdlib.h>
#include <stdio.h>
#include "lex.tab.h"
#include "ts.h"

FILE* file;
%}

%code provides {
  int yylex();
  void yyerror(const char *s);
}

%union { int nb; char str[16]; }
%token tMAIN tINT tLPAR tVOID tRPAR tERROR tLBRACE tRBRACE tIF tELSE tWHILE tPRINT tRETURN tADD tSUB tMUL tDIV tLT tGT tNE tEQ tLE tGE tASSIGN tAND tOR tNOT tSEMI tCOMMA 
%token <nb> tNB
%token <str> tID
%left tADD tSUB
%left tMUL tDIV
%start Programme
%%

Programme:
  TypeFonction tMAIN Fonction 
  |TypeFonction tID Fonction Programme 
;

TypeFonction:
  tINT
  |tVOID
;

Fonction:
  {increaseDepth();} tLPAR Variables tRPAR tLBRACE Bloc tRBRACE {printTable();deleteSymbolScope();decreaseDepth();printf("change scope \n");}
;

Variables:
  %empty
  |tVOID
  |Variable VariablesNext 
  ;

VariablesNext:
  %empty
  |tCOMMA Variable VariablesNext 
;

Variable :
  tINT tID {addSymbol($2);}
;

Bloc:
  %empty
  |Declaration Bloc
  |Affectation Bloc
  |If Bloc
  |While Bloc
  |Print Bloc
  |Return
;
 
Affectation:
  tID tASSIGN Expression tSEMI {;writeASM("COP", getSymbol($1), getTopStack(),0, file); deleteTopStack();}
;

Declaration:
  tINT VariableDeclaration tSEMI
  |tINT VariableDeclaration tASSIGN Expression tSEMI
;

VariableDeclaration:
  tID {addSymbol($1);}
  |tID tCOMMA {addSymbol($1);} VariableDeclaration 
;

If:
  tIF tLPAR Condition tRPAR tLBRACE {increaseDepth();} Bloc {printTable();deleteSymbolScope();decreaseDepth();}tRBRACE Else
;

Else:
  %empty
  |tELSE tLBRACE {increaseDepth();} Bloc {printTable();deleteSymbolScope();decreaseDepth();} tRBRACE
;

While:
  tWHILE tLPAR Condition tRPAR tLBRACE {increaseDepth();} Bloc {printTable();deleteSymbolScope();decreaseDepth();} tRBRACE 
;

Print:
  tPRINT tLPAR tID tRPAR tSEMI

Return:
  tRETURN tID tSEMI
;

Expression:
  tID {addTmpSymbol(); writeASM("COP", getTopStack() ,getSymbol($1), 0, file);}
  |tNB  {addTmpSymbol(); writeASM("AFC",getTopStack(),$1,0,file);}
  |tID tLPAR Argument tRPAR
  |Expression tADD Expression { int top = getTopStack(); deleteTopStack();writeASM("ADD", getTopStack(), getTopStack(), top, file); }
  |Expression tSUB Expression { int top = getTopStack(); deleteTopStack();writeASM("SUB", getTopStack(), getTopStack(), top, file); }
  |Expression tMUL Expression { int top = getTopStack(); deleteTopStack();writeASM("MUL", getTopStack(), getTopStack(), top, file); }
  |Expression tDIV Expression { int top = getTopStack(); deleteTopStack();writeASM("DIV", getTopStack(), getTopStack(), top, file); }
  |tLPAR Expression tRPAR
;

Argument:
  %empty
  |IDNB ArgumentNext
;

ArgumentNext: 
  %empty
  |tCOMMA Expression ArgumentNext
;

Condition:
  IDNB tEQ IDNB ConditionSuite
  |IDNB tNE IDNB ConditionSuite
  |IDNB tLT IDNB ConditionSuite
  |IDNB tGT IDNB ConditionSuite
  |IDNB tLE IDNB ConditionSuite
  |IDNB tGE IDNB ConditionSuite
  |IDNB tAND IDNB ConditionSuite
  |IDNB tOR IDNB ConditionSuite
  |tNOT tID ConditionSuite
  |tNOT tLPAR Condition tRPAR ConditionSuite
;

IDNB:
  tID
  |tNB
;

ConditionSuite:
  %empty
  |tAND Condition
  |tOR Condition
;

%%

/* LANG

a
a,a
a,a,a
...
*/

/*
e|a (,a)*
    ^^^^^
       B
*/

/*
A -> %empty
A -> a B
B -> %empty
B -> ,a B




Programme:
  Fonction tVOID tMAIN tLPAR Variables tRPAR tLBRACE Contenu tRBRACE 
  |Fonction tINT tMAIN tLPAR Variables tRPAR tLBRACE Contenu tRBRACE
;

Fonction:
  %empty
  |tVOID tID tLPAR Variables tRPAR tLBRACE Contenu tRBRACE Fonction
  |tINT tID tLPAR Variables tRPAR tLBRACE Contenu tRBRACE Fonction
  ;
*/

void yyerror(const char *s) { fprintf(stderr, "%s\n", s); exit(1);}

int main(void) {
  yydebug = 1;
  file = fopen("asm.out", "w");
  printf("Gramatical analysis\n"); // yydebug=1;
  yyparse();
  return 0;
}
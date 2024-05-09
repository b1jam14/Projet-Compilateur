%{
#include <stdlib.h>
#include <stdio.h>
#include "lex.tab.h"
#include "ts.h"

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
  TypeFonction tMAIN {addFonction("main");endJump("JMP");} Fonction {writeASM("NOP",0,0,0);writeASMfile();}
  |TypeFonction tID {increaseDepth();addFonction($2);addReturnAddress("?");addReturnValue("?");} Fonction Programme 
;

TypeFonction:
  tINT
  |tVOID
;

Fonction:
  {increaseDepth();} tLPAR Variables tRPAR tLBRACE Bloc tRBRACE {writeASM("RET",0,0,0);deleteSymbolScope();decreaseDepth();}
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
  |tID tLPAR Argument tRPAR tSEMI Bloc
;
 
Affectation:
  tID tASSIGN Expression tSEMI {writeASM("COP", getSymbol($1), getTopStack(),0); deleteTopStack();}
;

Declaration:
  tINT VariableDeclaration tSEMI
  |tINT VariableDeclaration tASSIGN Expression tSEMI {int tmpVar = getTopStack(); deleteTopStack() ;writeASM("COP", getTopStack(), tmpVar,0);}
;

VariableDeclaration:
  tID {addSymbol($1);}
  |tID tCOMMA {addSymbol($1);} VariableDeclaration 
;

If:
  tIF tLPAR Condition tRPAR tLBRACE {increaseDepth();writeASM("JMF", getTopStack(), -1, 0); deleteTopStack();} Bloc {deleteSymbolScope();decreaseDepth();}tRBRACE Else 
;

Else:
  %empty {endJump("JMF");}
  |tELSE tLBRACE {writeASM("JMP",-1,0,0);endJump("JMF");increaseDepth();} Bloc {deleteSymbolScope();decreaseDepth();endJump("JMP");} tRBRACE
;

While:
  tWHILE tLPAR Condition tRPAR tLBRACE {increaseDepth();writeASM("JMF", getTopStack(),-1,0);} Bloc {deleteSymbolScope();decreaseDepth();writeASM("JMP",getJumpEmpty()-1,0,0);endJump("JMF");} tRBRACE 
;

Print:
  tPRINT tLPAR tID tRPAR tSEMI

Return:
  tRETURN Expression tSEMI {writeASM("COP", getSymbol("!VAL"),getTopStack(),0);deleteTopStack();writeASM("RET",0,0,0);}
;

Expression:
  tID {addTmpSymbol(); writeASM("COP", getTopStack() ,getSymbol($1), 0);}
  |tNB  {addTmpSymbol(); writeASM("AFC",getTopStack(),$1,0);}
  |tID {addReturnAddress("!");addReturnValue("!");} tLPAR Argument tRPAR {int adr=getSymbol("!VAL"); deleteSymbolTmpScope(); deleteTopStack(); deleteTopStack();addTmpSymbol();writeASM("PUSH",getTopStack(),0,0);writeASM("CALL",getFonctionAddress($1),0,0);writeASM("POP",getTopStack(),0,0);writeASM("COP",getTopStack(),adr,0);} 
  |Expression tADD Expression { int top = getTopStack(); deleteTopStack();writeASM("ADD", getTopStack(), getTopStack(), top); }
  |Expression tSUB Expression { int top = getTopStack(); deleteTopStack();writeASM("SUB", getTopStack(), getTopStack(), top); }
  |Expression tMUL Expression { int top = getTopStack(); deleteTopStack();writeASM("MUL", getTopStack(), getTopStack(), top); }
  |Expression tDIV Expression { int top = getTopStack(); deleteTopStack();writeASM("DIV", getTopStack(), getTopStack(), top); }
  |tLPAR Expression tRPAR
;

Argument:
  %empty
  |IDNB ArgumentNext
  |Expression ArgumentNext
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
  |IDNB
;

IDNB:
  tID {addTmpSymbol();writeASM("COP", getTopStack(), getSymbol($1), 0);}
  |tNB {addTmpSymbol();writeASM("AFC", getTopStack(), $1,0);}
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
  printf("Gramatical analysis\n"); // yydebug=1;
  writeASM("JMP",-1,0,0);
  yyparse();
  return 0;
}
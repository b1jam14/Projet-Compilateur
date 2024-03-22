%{
#include <stdlib.h>
#include <stdio.h>
#include "lex.tab.h"
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
  tLPAR Variables tRPAR tLBRACE Bloc tRBRACE 
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
  tINT tID
;

Bloc:
  %empty
  |Declaration Bloc
  |If Bloc
  |While Bloc
  |Print Bloc
  |Return
;

Declaration:
  tINT tID variableunique tSEMI 
  |tID variableunique tASSIGN Expression tSEMI {addSymbol($4)}
  |tINT tID variableunique tASSIGN Expression tSEMI {addSymbol($4)}
;

variableunique:
  %empty
  |tCOMMA tID variableunique {if(getSymbol($2)==-1){addSymbol($2, 1);}}
;

If:
  tIF tLPAR Condition tRPAR tLBRACE Bloc tRBRACE Else
;

Else:
  %empty
  |tELSE tLBRACE Bloc tRBRACE
;

While:
  tWHILE tLPAR Condition tRPAR tLBRACE Bloc tRBRACE 
;

Print:
  tPRINT tLPAR tID tRPAR tSEMI

Return:
  tRETURN tID tSEMI
;

Expression:
  tID 
  |tNB
  |tID tLPAR Argument tRPAR
  |Expression tADD Expression
  |Expression tSUB Expression
  |Expression tMUL Expression
  |Expression tDIV Expression
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
  printf("Gramatical analysis\n"); // yydebug=1;
  yyparse();
  return 0;
}
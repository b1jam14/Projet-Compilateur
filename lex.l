%option noyywrap
%option noinput
%option nounput

%{
#include "lex.tab.h"	
%}

%%
"/*"(.|\n)*"*/"		{/*ignore*/}
"//".*				{/*ignore*/}
[ \n]				{/*ignore*/}

"int"				{return tINT;}
"("					{return tLPAR;}
"main"				{return tMAIN;}
"void"				{return tVOID;}
")"					{return tRPAR;}
"{"					{return tLBRACE;}
"}"					{return tRBRACE;}
"if"				{return tIF;}
"else"				{return tELSE;}
"while"				{return tWHILE;}
"print"				{return tPRINT;}
"return"			{return tRETURN;}
"+"					{return tADD;}
"-"					{return tSUB;}
"*"					{return tMUL;}
"/"					{return tDIV;}
"<"					{return tLT;}
">"					{return tGT;}
"!="				{return tNE;}
"=="				{return tEQ;}
"<="				{return tLE;}
">="				{return tGE;}
"="					{return tASSIGN;}
"&&"				{return tAND;}	
"||"				{return tOR;}
"!"					{return tNOT;}
";"					{return tSEMI;}
","					{return tCOMMA;}
"&"					{return tESPER;}
"const"				{return tCONST;}

[a-zA-Z][a-zA-Z0-9_]*	{strcpy(yylval.str, yytext);if(strlen(yytext)<15){return tID;}else{return tERROR;}}
"0x"[0-9]*				{yylval.nb=atoi(yytext);return tNB;}
[0-9]*					{yylval.nb=atoi(yytext);return tNB;}

.					{return tERROR;}
%%
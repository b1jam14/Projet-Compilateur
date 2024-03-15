%option noyywrap
%option noinput
%option nounput
%%

"int"	{printf("tINT\n");}
"main"	{printf("tID: 'main'\n");}
"("	{printf("tLPAR\n");}
"void"	{printf("tVOID\n");}
")"	{printf("tRPAR\n");}
"{"	{printf("tLBRACE\n");}
"}"	{printf("tRBRACE\n");}
"if"	{printf("tIF\n");}
"else"	{printf("tELSE\n");}
"while"	{printf("tWHILE\n");}
"print"	{printf("tPRINT\n");}
"return"	{printf("tRETURN\n");}
"+"	{printf("tADD\n");}
"-"	{printf("tSUB\n");}
"*"	{printf("tMUL\n");}
"/"	{printf("tDIV\n");}
"<"	{printf("tLT\n");}
">"	{printf("tGT\n");}
"!="	{printf("tNE\n");}
"=="	{printf("tEQ\n");}
"<="	{printf("tLE\n");}
">="	{printf("tGE\n");}
"="	{printf("tASSIGN\n");}
"&&"	{printf("tAND\n");}	
"||"	{printf("tOR\n");}
"!"	{printf("tNOT\n");}
";"	{printf("tSEMI\n");}
","	{printf("tCOMMA\n");}
.       {printf("tERROR\n");}
[ \n]	/*ignore*/
%%

int main(int argc, char **argv){

if (argc != 2 ){
	fprintf(stderr, "usage %s filename\n", argv[0]);
	exit(1);
}

yyin = fopen(argv[1], "r");
if (!yyin){
	fprintf(stderr, "invalid filename: %s\n", argv[1]);
	exit(2);
}

yylex();
fclose(yyin);
return 0;
}


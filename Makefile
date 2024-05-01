all: lex

lex.tab.c lex.tab.h:	lex.y
	bison -t -v -d lex.y

lex.yy.c: lex.l lex.tab.h
	flex lex.l

lex: ts.c lex.yy.c lex.tab.c lex.tab.h
	gcc -o lex ts.c lex.tab.c lex.yy.c

clean:
	rm lex lex.tab.c lex.yy.c lex.tab.h lex.output asm.out test.out

test: all
	cat test.c | ./lex > test.out

all: howdy

parser.tab.c parser.tab.h:	parser.y
	bison -t -v -d parser.y

lex.yy.c: lexer.l parser.tab.h
	flex lexer.l

howdy: lex.yy.c parser.tab.c parser.tab.h
	gcc -o howdy parser.tab.c lex.yy.c

clean:
	rm howdy parser.tab.c lex.yy.c parser.tab.h howdy.output

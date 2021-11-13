all: howdy

parser.tab.c parser.tab.h:	parser.y
	bison -t -v -d parser.y

lex.yy.c: lexer.l parser.tab.h
	flex lexer.l

howdy: lex.yy.c parser.tab.c parser.tab.h
	gcc parser.tab.c lex.yy.c -o howdy

clean:
	$(RM) howdy parser.tab.c lex.yy.c parser.tab.h parser.output

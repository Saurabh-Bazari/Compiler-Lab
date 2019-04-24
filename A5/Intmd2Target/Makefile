all:
	bison -d -v -t parser.y
	flex lexer.lex
	g++ lex.yy.c parser.tab.c parser.tab.h -o parser -lfl

bison -d -v parser.y
flex lexer.lex
g++ -g -std=c++11 lex.yy.c parser.tab.c parser.tab.h -o main -lfl
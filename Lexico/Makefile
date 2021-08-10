CC=gcc
CFLAGS=-lfl

tradutor: lex.yy
	./tradutor ./test/error.c

lex.yy: flex
	$(CC) -Wall ./src/lex.yy.c $(CFLAGS) -o tradutor

flex: ./src/lexico.l
	flex ./src/lexico.l
	mv ./lex.yy.c ./src/


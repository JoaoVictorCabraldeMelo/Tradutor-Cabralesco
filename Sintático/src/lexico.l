%option noinput nounput
%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"
#include "sintax.tab.h"
#include "../lib/colors.h"
int lines = 1;
int columns = 1;
int errors = 0;
int escopo = 0;
%}

ID [A-Za-z_]+[A-Za-z0-9_]*

LETTER [A-Za-z]

DIGIT [0-9]

LISTTYPE list

TYPE int|float

NULL NIL

STRING \"[^\"]*\"|'[^']*'

ASSIGN =

IF if

ELSE else 

FOR for 

RETURN return

OUTPUT writeln|write 

INPUT read

INFIX :

FUNCTION >>|<<

COMMENT \/\/.*|\/\*[^\*\/]*\*\/


%%
"+"|"-" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return SUB_ADD;
}

"*"|"/" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return MUL_DIV;
}

"||" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return OR;
}

"&&" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return AND;
}

">"|">="|"<"|"<="|"=="|"!=" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return REL_OP;
}

"{" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  escopo++;
  return '{';
}

"}" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  escopo--;
  return '}';
}

"(" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return '(';
}

")" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return ')';
}

";" {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return ';';
}

"," {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines; 
  columns += yyleng; 
  yylval.terminal.coluna = columns;
  return ',';
}


\? {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return '?';
}

\! {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return '!';
}

\% {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return '%';
}


[\t ]+ {
  columns += yyleng;
} 

\n|\r {
  lines++;
  columns = 0;
}

{COMMENT} {
  columns += yyleng;
}

{STRING} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return STRING;
}

{DIGIT}*\.{DIGIT}+(E[+|-]?{DIGIT}+)? {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return FLOAT;
}

{DIGIT}+ {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return INT;
}


{LISTTYPE} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return LISTTYPE;
}

{TYPE} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return TYPE;
}

{NULL} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return NIL;
}

{ASSIGN} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return ASSIGN;
}

{IF} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return IF;
}

{ELSE} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return ELSE;
}

{FOR} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return FOR;
}

{RETURN} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return RETURN;
}

{OUTPUT} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return OUTPUT;
}

{INPUT} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return INPUT;
}

{INFIX} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return INFIX;
}

{FUNCTION} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  return FUNCTION;
}


{ID} {
  strcpy(yylval.terminal.valor, yytext);
  yylval.terminal.linha = lines;
  columns += yyleng;
  yylval.terminal.coluna = columns;
  yylval.terminal.escopo = escopo;
  return ID;
}

. {
  errors++;
  printf( BHRED "lexycal error: %s \n"  "Unidentified Lexeme at line: %d and column: %d\n" RESET, yytext, lines, columns);
  return LEXICAL_ERROR;
}

%%

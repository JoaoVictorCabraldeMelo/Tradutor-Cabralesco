%option noinput nounput
%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include "arvore.h"
#include "escopo.h"
#include "tabela.h"
#include "syntax.tab.h"
#include "colors.h"
int lines = 1;
int columns = 1;
int errors = 0;
%}

ID [A-Za-z_]+[A-Za-z0-9_]*

LETTER [A-Za-z]

DIGIT [0-9]

LISTTYPE list

TYPE int|float

NULL NIL

STRING \"[^\"]*\"

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
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return SUB_ADD;
}

"*"|"/" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return MUL_DIV;
}

"||" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return OR;
}

"&&" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return AND;
}

">"|">="|"<"|"<="|"=="|"!=" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return REL_OP;
}

"{" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  bota_escopo();
  coloca_folha(yylval.terminal);
  return '{';
}

"}" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  fecha_escopo();
  printf("fechei\n");
  return '}';
}

"(" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return '(';
}

")" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ')';
}

";" {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ';';
}

"," {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines; 
  columns += yyleng; 
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ',';
}


\? {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return '?';
}

\! {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return '!';
}

\% {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
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
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return STRING;
}

{DIGIT}*\.{DIGIT}+(E[+|-]?{DIGIT}+)? {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return FLOAT;
}

{DIGIT}+ {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return INT;
}


{LISTTYPE} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return LISTTYPE;
}

{TYPE} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return TYPE;
}

{NULL} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return NIL;
}

{ASSIGN} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ASSIGN;
}

{IF} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return IF;
}

{ELSE} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ELSE;
}

{FOR} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return FOR;
}

{RETURN} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return RETURN;
}

{OUTPUT} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return OUTPUT;
}

{INPUT} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return INPUT;
}

{INFIX} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return INFIX;
}

{FUNCTION} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return FUNCTION;
}


{ID} {
  yylval.terminal = aloca_folha(yytext);
  yylval.terminal->linha = lines;
  columns += yyleng;
  yylval.terminal->coluna = columns;
  coloca_folha(yylval.terminal);
  return ID;
}

. {
  errors++;
  printf( BHRED "lexycal error: %s \n"  "Unidentified Lexeme at line: %d and column: %d\n" RESET, yytext, lines, columns);
  return LEXICAL_ERROR;
}

%%

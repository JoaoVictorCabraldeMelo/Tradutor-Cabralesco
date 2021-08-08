%{
#include<math.h>
#include<stdio.h>
%}

DIGIT [0-9]
ID [a-z][a-z0-9]*

%%

{DIGIT}+ {
  printf("Um inteiro: %s (%d)", yytext, atoi(yytext));
}

{DIGIT}+"."{DIGIT}* {
  printf("Um float: %s (%g)", yytext, atof(yytext));
}

if|then|begin|end|procedure|function {
  printf("Uma palavra chave: %s\n", yytext);
}

{ID} printf("Um identificador: %s\n", yytext);

"+" | "-" | "*" | "/" printf("Um operador: %s\n", yytext);

"{"[^{}\n]*"}" 

[\t\n]+ 

. printf("Caractere: %s\n", yytext);

%%

int main(int argc, char**argv){

  ++argv, --argc;

  if(argc > 0){
    yyin = fopen(argv[0], "r");
  } else {
    yyin = stdin;
  }
  yylex();
  fclose();
}
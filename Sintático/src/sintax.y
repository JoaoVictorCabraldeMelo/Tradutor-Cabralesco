
%define lr.type canonical-lr 
%define parse.error verbose

%{
  #include <stdio.h>
  #include "../lib/arvore.h"
  #include "../lib/colors.h"
  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex(void);
  extern int yylex_destroy(void);
  int error = 0;

%}

%union {
  struct lex {
    int linha;
    int escopo;
    int coluna;
    char valor[1000];
  } terminal;

  struct node *producao;
}


%token <terminal> ID
%token <terminal> FUNCTION 
%token <terminal> INFIX
%token <terminal> INPUT
%token <terminal> OUTPUT
%token <terminal> IF
%token <terminal> ELSE
%token <terminal> RETURN
%token <terminal> FOR
%token <terminal> ASSIGN
%token <terminal> NIL
%token <terminal> TYPE
%token <terminal> LISTTYPE
%token <terminal> INT FLOAT
%token <terminal> STRING
%token <terminal> '%'
%token <terminal> '!'
%token <terminal> '?'
%token <terminal>  ',' ';' '(' ')' '{' '}'
%token <terminal> REL_OP
%token <terminal> AND
%token <terminal> OR
%token <terminal> MUL_DIV
%token <terminal> SUB_ADD


%type <producao> program
%type <producao> paramList 
%type <producao> param
%type <producao> variableParam
%type <producao> var
%type <producao> typeSpec
%type <producao> functionParam
%type <producao> functionParams
%type <producao> functionParamsList
%type <producao> call 
%type <producao> stmt
%type <producao> expStatement
%type <producao> compoundStatement
%type <producao> argList
%type <producao> stmList
%type <producao> ifStatement
%type <producao> forStatement
%type <producao> returnStatement
%type <producao> inputStatement
%type <producao> outputStatement
%type <producao> expression
%type <producao> orExpression
%type <producao> andExpression
%type <producao> relationalExpression
%type <producao> listExpression
%type <producao> arithmExpression
%type <producao> arithmMulDivExpression
%type <producao> unaryTerm
%type <producao> term 
%type <producao> immutable
%type <producao> const
%type <producao> listOP

%precedence ')'
%precedence ELSE


%start program


%%

program : 
  paramList {
  }

paramList: 
  paramList param {
  } 
  | param {
  }

param:
  variableParam {
  }
  | functionParam {
  }

variableParam: 
  typeSpec var ';' {
  }
  | typeSpec error ';' {
    yyerrok;
  }

var: 
  ID {
  }

typeSpec:
  TYPE {
  }
  | TYPE LISTTYPE {
  }

functionParam:
  typeSpec ID '(' functionParams ')' stmt {
  }

functionParams:
  functionParamsList {
  }
  | %empty {
  }

functionParamsList:
  functionParamsList ',' typeSpec ID {
  }
  | typeSpec ID {
  }

call:
  ID '(' argList ')' {
  }

argList:
  argList ',' ID {}
  | ID {}
  | %empty {}

stmList:
  stmList stmt {
  }
  | stmt {
  }

stmt:
  expStatement {
  }
  | compoundStatement {
  } 
  | ifStatement {
  }
  | forStatement {
  }
  | returnStatement {
  }
  | inputStatement {
  }
  | outputStatement {
  }
  | variableParam {
  }
  
expStatement:
  expression ';' {
  }

compoundStatement:
  '{' stmList '}' {
  }
  | '{' '}' {}


ifStatement:
  IF '(' expression ')' stmt {
  }
  IF '(' expression ')' stmt ELSE stmt {
  }

forStatement:
  FOR '(' expStatement expStatement expression ')' stmt {
  }

returnStatement:
  RETURN expression ';' {
  }
  | RETURN error ';' {
  }

inputStatement:
  INPUT '(' var ')' ';' {
  }

outputStatement:
  OUTPUT '(' term ')' ';' {
  }

expression:
  ID ASSIGN expression  {
  }
  | orExpression {
  }

orExpression:
  orExpression OR andExpression {
  }
  | andExpression {
  }

andExpression:
  andExpression AND relationalExpression {
  }
  | relationalExpression {
  }

relationalExpression:
  relationalExpression REL_OP listExpression {
  }
  | listExpression {
  }

listExpression:
  arithmExpression listOP listExpression {
  }
  | arithmExpression {
  }

arithmExpression:
  arithmExpression SUB_ADD arithmMulDivExpression {
  }
  | arithmMulDivExpression {
  }

arithmMulDivExpression:
  arithmMulDivExpression MUL_DIV term {
  }
  | term {
  }

term:
  const {
  }
  | call {
  }
  | ID {
  }
  | unaryTerm {
  }
  | immutable {
  }

unaryTerm:
  '!' term {
  }
  | '%' term {
  }
  | '?' term {
  }
  | SUB_ADD term {
  }


immutable:
  '(' expression ')' {
  }

const:
  INT {
  }
  | FLOAT {
  }
  | STRING {
  }
  | NIL {
  }

listOP:
  FUNCTION {
  }
  | INFIX {
  }
  
%%

void yyerror(const char *s){
  error++;
  printf(BHYEL "%s\n", s);
  printf("Syntax Erros: %d\n", error);
  printf("Linha: %d\n", yylval.terminal.linha);
  printf("Coluna: %d\n", yylval.terminal.coluna);
  printf("Valor: %s\n" RESET, yylval.terminal.valor);
}


int main(int argc, char **argv) {

  // #ifdef YYDEBUG
  // yydebug = 1;
  // #endif

  FILE *fp;

  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  } else {
    yyin = stdin;
  }

  yyparse();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}


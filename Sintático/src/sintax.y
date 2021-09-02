
%define lr.type canonical-lr 
%define parse.error verbose

%{
  #include <stdio.h>
  #include "../lib/arvore.h"
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
%type <producao> declaration
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
    printf("program -> paramList\n");
  }

paramList: 
  paramList param {
    printf("paramList -> paramList param\n");
  } 
  | param {
    printf("paramList -> param\n");
  }

param:
  variableParam {
    printf("param -> variableParam \n");
  }
  | functionParam {
    printf(" param -> functionParam \n");
  }

variableParam: 
  typeSpec var ';' {
    printf("variableParam -> typeSpec var ; \n");
  }

var: 
  ID {
    printf("var -> ID\n");
  }

typeSpec:
  TYPE {
    printf("typeSpec -> TYPE \n");
  }
  | TYPE LISTTYPE {
    printf("TYPE -> LISTTYPE\n");
  }

functionParam:
  typeSpec ID '(' functionParams ')' stmt {
    printf("functionParam -> typeSpec ID ( functionParams ) stmt \n");
  }

functionParams:
  functionParamsList {
    printf("functionParams -> functionParamsList \n");
  }
  | %empty {
    printf("functionParams -> empty \n");
  }

functionParamsList:
  functionParamsList ',' typeSpec ID {
    printf("functionParamsList -> functionParams , typeSpec ID \n");
  }
  | typeSpec ID {
    printf("functionParamsList -> typeSpec ID \n");
  }

call:
  ID '(' functionParams ')' {
    printf("call -> ID ( functionParams ) \n");
  }

stmList:
  stmList stmt {
    printf("stmList -> stmt \n");
  }
  | stmt {
    printf("stmList -> stmt \n");
  }

stmt:
  expStatement {
    printf("stmt -> expStatement \n");
  }
  | compoundStatement {
    printf("stmt -> compoundStatement \n");
  } 
  | ifStatement {
    printf("stmt -> ifStatement \n");
  }
  | forStatement {
    printf("stmt -> forStatement \n");
  }
  | returnStatement {
    printf("stmt -> returnStatement \n");
  }
  | inputStatement {
    printf("stmt -> inputStatement \n");
  }
  | outputStatement {
    printf("stmt -> outputStatement \n");
  }

expStatement:
  expression ';' {
    printf("expStatement -> expression \n");
  }

compoundStatement:
  '{' declaration stmList '}' {
    printf("compoundStatement -> { declaration stmList } \n");
  }


declaration:
  declaration variableParam {
    printf("declaration -> variableParam \n");
  }
  | %empty {
    printf("declaration -> empty \n");
  }


ifStatement:
  IF '(' expression ')' stmt {
    printf("ifStatement -> IF ( expression ) stmt");
  }
  | IF '(' expression ')' stmt ELSE stmt {
    printf("ifStatement -> IF ( expression ) stmt ELSE stmt");
  }

forStatement:
  FOR '(' expStatement expStatement expression ')' stmt {
    printf("forStatement -> FOR ( expStatement expStatement expression ) stmt \n");
  }

returnStatement:
  RETURN expression ';' {
    printf("returnStatement -> RETURN expression ; \n");
  }

inputStatement:
  INPUT '(' var ')' ';' {
    printf("inputStatement -> INPUT ( var ) ;\n");
  }

outputStatement:
  OUTPUT '(' term ')' ';' {
    printf("outputStatement -> OUTPUT ( term ) ; \n ");
  }

expression:
  ID ASSIGN expression  {
    printf("expression -> ID ASSIGN expression \n");
  }
  | orExpression {
    printf("expression -> orExpression \n");
  }

orExpression:
  orExpression OR andExpression {
    printf("orExpression -> orExpression OR andExpression \n");
  }
  | andExpression {
    printf("orExpression -> andExpression \n");
  }

andExpression:
  andExpression AND relationalExpression {
    printf("andExpression -> relationalExpression \n");
  }
  | relationalExpression {
    printf("andExpression -> relationalExpression \n");
  }

relationalExpression:
  relationalExpression REL_OP listExpression {
    printf("relationalExpression -> relationalExpression REL_OP listExpression \n");
  }
  | listExpression {
    printf("relationalExpression -> listExpression \n");
  }

listExpression:
  arithmExpression listOP listExpression {
    printf("listExpression -> arithmExpression listOP listExpression \n");
  }
  | arithmExpression {
    printf("listExpression -> arithmExpression \n");
  }

arithmExpression:
  arithmExpression SUB_ADD arithmMulDivExpression {
    printf("arithmExpression -> arithmExpression SUB_ADD arithmMulDivExpression \n");
  }
  | arithmMulDivExpression {
    printf("arithmExpression -> arithmMulDivExpression \n");
  }

arithmMulDivExpression:
  arithmMulDivExpression MUL_DIV term {
    printf("arithmMulDivExpression -> arithmMulDivExpression MUL_DIV term \n");
  }
  | term {
    printf("arithmMulDivExpression -> term \n");
  }

term:
  const {
    printf("term -> const \n");
  }
  | call {
    printf("term -> call \n");
  }
  | ID {
    printf("term -> ID \n");
  }
  | unaryTerm {
    printf("term -> unaryTerm \n");
  }
  | immutable {
    printf("term -> immutable \n");
  }

unaryTerm:
  '!' term {
    printf("! term\n");
  }
  | '%' term {
    printf("percent term \n");
  }
  | '?' term {
    printf("? term \n");
  }
  | SUB_ADD term {
    printf("SUB_ADD term \n");
  }


immutable:
  '(' expression ')' {
    printf("immutable -> ( expression ) \n");
  }

const:
  INT {
    printf("const -> INT\n");
  }
  | FLOAT {
    printf("const -> FLOAT\n");
  }
  | STRING {
    printf("const -> STRING\n");
  }
  | NIL {
    printf("const -> NIL\n");
  }

listOP:
  FUNCTION {
    printf("listOp -> FUNCTION\n");
  }
  | INFIX {
    printf("listOP -> INFIX");
  }
  
%%

void yyerror(const char *s){
  fprintf(stderr, "%s\n", s);
  error++;
  printf("Erros: %d\n", error);
  printf("Linha: %d\n", yylval.terminal.linha);
  printf("Coluna: %d\n", yylval.terminal.coluna);
  printf("Valor: %s\n", yylval.terminal.valor);
}


int main(int argc, char **argv) {

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


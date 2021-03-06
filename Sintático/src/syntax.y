
%define lr.type canonical-lr 
%define parse.error verbose



%{
  #include <stdio.h>
  #include <string.h>
  #include "arvore.h"
  #include "tabela.h"
  #include "colors.h"

  #define eh "Eh funcao"
  #define nao_eh "Nao eh" 


  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex();
  extern int yylex_destroy();

  int error = 0;
%}

%union {
  Folha *terminal;
  Node *producao;
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
%token <terminal> LEXICAL_ERROR


%type <producao> program
%type <producao> paramList 
%type <producao> param
%type <producao> variableParam
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
    $$ = aloca_no("program");
    $$->filhos[0] = $1;
    raiz = $$;
  }

paramList: 
  paramList param {
    $$ = aloca_no("paramList");
    $$->filhos[0] = $1;
    $$->filhos[1] = $2;
  } 
  | param {
    $$ = $1;
  }

param:
  variableParam {
    $$ = $1;
  }
  | functionParam {
    $$ = $1;
  }

variableParam: 
  TYPE LISTTYPE ID ';' {
    Simbolo sim;
    
    char *tipo = $1->valor;
    strcat(tipo, $2->valor);
    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = $3->escopo;
    sim.tipo = tipo;
    sim.value = $3->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("variableParam");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);
  }
  | TYPE ID ';' {
    Simbolo sim;

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = $3->escopo;
    sim.tipo = $1->valor;
    sim.value = $2->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("variableParam");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
  }
  | TYPE LISTTYPE LEXICAL_ERROR {
    $$ = NULL;
    yyerrok;
  }
  | TYPE LEXICAL_ERROR ';' {
    $$ = NULL;
    yyerrok;
  }

functionParam:
  TYPE ID '(' functionParams ')' stmt {
    Simbolo sim;

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = $2->escopo;
    sim.tipo = $1->valor;
    sim.value = $2->valor;
    sim.tipo_funcao = eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParam");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $4;
    $$->filhos[3] = $6;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    
  }
  | TYPE LISTTYPE ID '(' functionParams ')' stmt {
    Simbolo sim;

    char *tipo = $1->valor;
    strcat(tipo,$2->valor);
    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = $3->escopo;
    sim.tipo = tipo;
    sim.tipo_funcao = eh;
    sim.value = $3->valor;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParam");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = aloca_no("");
    $$->filhos[3] = $5;
    $$->filhos[4] = $7;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);

  }

functionParams:
  functionParamsList {
    $$ = $1;
  }
  | %empty {
    $$ = NULL;
  }

functionParamsList:
  functionParamsList ',' TYPE ID {
    Simbolo sim;

    sim.linha = $4->linha;
    sim.coluna = $4->coluna;
    sim.escopo = $4->escopo;
    sim.value = $4->valor;
    sim.tipo = $3->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = aloca_no("");

    coloca_terminal($$->filhos[1], $3);
    coloca_terminal($$->filhos[2], $4);

  }
  | functionParamsList ',' TYPE LISTTYPE ID {
    Simbolo sim;

    char *tipo = $3->valor;
    strcat(tipo, $4->valor);
    sim.linha = $5->linha;
    sim.coluna = $5->coluna;
    sim.escopo = $5->escopo;
    sim.value = $5->valor;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = aloca_no("");
    $$->filhos[3] = aloca_no("");

    coloca_terminal($$->filhos[1], $3);
    coloca_terminal($$->filhos[2], $4);
    coloca_terminal($$->filhos[3], $5);

  }
  | TYPE ID {
    Simbolo sim;

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = $2->escopo;
    sim.value = $2->valor;
    sim.tipo = $1->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);

  }
  | TYPE LISTTYPE ID {
    Simbolo sim;

    char* tipo = $1->valor;
    strcat(tipo, $2->valor); 
    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = $3->escopo;
    sim.value = $3->valor;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);
  }

call:
  ID '(' argList ')' {    
    $$ = aloca_no("call");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $3;

    coloca_terminal($$->filhos[0], $1);
  }

argList:
  argList ',' ID {
    $$ = aloca_no("argList");
  
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");

    coloca_terminal($$->filhos[1], $3);
  }
  | ID {
    $$ = aloca_no("argList");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }
  | %empty {
    $$ = NULL;
  }

stmList:
  stmList stmt {
    $$ = aloca_no("stmList");
    $$->filhos[0] = $1;
    $$->filhos[1] = $2;
  }
  | stmt {
    $$ = $1;
  }

stmt:
  expStatement {
    $$ = $1;
  }
  | compoundStatement {
    $$ = $1;
  } 
  | ifStatement {
    $$ = $1;
  }
  | forStatement {
    $$ = $1;
  }
  | returnStatement {
    $$ = $1;
  }
  | inputStatement {
    $$ = $1;
  }
  | outputStatement {
    $$ = $1;
  }
  | variableParam {
    $$ = $1;
  }
  
expStatement:
  expression ';' {
    $$ = $1;
  }


compoundStatement:
  '{' stmList '}' {
    $$ = $2;
  }
  | '{' '}' {
    $$ = NULL;
  }


ifStatement:
  IF '(' expression ')' stmt {
    $$ = aloca_no("ifStatement");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $3;
    $$->filhos[2] = $5;

    coloca_terminal($$->filhos[0], $1);
  }
  | IF '(' expression ')' stmt ELSE stmt {
    $$ = aloca_no("ifStatement");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $3;
    $$->filhos[2] = $5;
    $$->filhos[3] = aloca_no("");
    $$->filhos[4] = $7;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[3], $6);
  }

forStatement:
  FOR '(' expStatement expStatement expression ')' stmt {
    $$ = aloca_no("forStatement");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $3;
    $$->filhos[2] = $4;
    $$->filhos[3] = $5;
    $$->filhos[4] = $7;

    coloca_terminal($$->filhos[0], $1);
  }

returnStatement:
  RETURN expression ';' {
    $$ = aloca_no("returnStatement");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;
  }

inputStatement:
  INPUT '(' ID ')' ';' {
    $$ = aloca_no("inputStatement");

    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $3);
  }

outputStatement:
  OUTPUT '(' term ')' ';' {
    $$ = aloca_no("outputStatement");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] =  $3;

    coloca_terminal($$->filhos[0], $1);
  }

expression:
  ID ASSIGN expression  {
    $$ = aloca_no("expression");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
  }
  | orExpression {
    $$ = $1;
  }

orExpression:
  orExpression OR andExpression {
    $$ = aloca_no("orExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[1], $2);

  }
  | andExpression {
    $$ = $1;
  }

andExpression:
  andExpression AND relationalExpression {
    $$ = aloca_no("andExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[1], $2);
  }
  | relationalExpression {
    $$ = $1;
  }

relationalExpression:
  relationalExpression REL_OP listExpression {
    $$ = aloca_no("relationalExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[1], $2);
  }
  | listExpression {
    $$ = $1;
  }

listExpression:
  arithmExpression listOP listExpression {
    $$ = aloca_no("listExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = $2;
    $$->filhos[2] = $3;
  }
  | arithmExpression {
    $$ = $1;
  }

arithmExpression:
  arithmExpression SUB_ADD arithmMulDivExpression {
    $$ = aloca_no("arithmExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[1], $2);
  }
  | arithmMulDivExpression {
    $$ = $1;
  }

arithmMulDivExpression:
  arithmMulDivExpression MUL_DIV term {
    $$ = aloca_no("arithmMulDivExpression");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("");
    $$->filhos[2] = $3;

    coloca_terminal($$->filhos[1], $2);
  }
  | term {
    $$ = $1;
  }

term:
  const {
    $$ = $1;
  }
  | call {
    $$ = $1;
  }
  | ID {
    $$ = aloca_no("");
    coloca_terminal($$, $1);
  }
  | unaryTerm {
    $$ = $1;
  }
  | immutable {
    $$ = $1;
  }
  | error {
    $$ = NULL;
    yyerrok;
  }

unaryTerm:
  '!' term {
    $$ = aloca_no("unaryTerm");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;
    
    coloca_terminal($$->filhos[0], $1);
  }
  | '%' term {
    $$ = aloca_no("unaryTerm");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;

    coloca_terminal($$->filhos[0], $1);
  }
  | '?' term {
    $$ = aloca_no("unaryTerm");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;

    coloca_terminal($$->filhos[0], $1);
  }
  | SUB_ADD term {
    $$ = aloca_no("unaryTerm");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;

    coloca_terminal($$->filhos[0], $1);
  }


immutable:
  '(' expression ')' {
    $$ = aloca_no("immutable");
    $$->filhos[0] = aloca_no("");
    $$->filhos[1] = $2;
    $$->filhos[2] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[2], $3);
  }

const:
  INT {
    $$ = aloca_no("const");
    $$->filhos[0] = aloca_no("");
    
    coloca_terminal($$->filhos[0], $1);
  }
  | FLOAT {
    $$ = aloca_no("const");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }
  | STRING {
    $$ = aloca_no("const");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }
  | NIL {
    $$ = aloca_no("const");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }

listOP:
  FUNCTION {
    $$ = aloca_no("listOp");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }
  | INFIX {
    $$ = aloca_no("listOp");
    $$->filhos[0] = aloca_no("");

    coloca_terminal($$->filhos[0], $1);
  }
  
%%

void yyerror(const char *s){
  error++;
  printf(BHYEL "%s\n" RESET, s);
  printf(BHYEL "Syntax Erros: %d\n" RESET, error);
  printf(BHYEL "Linha: %d\n" RESET, yylval.terminal->linha);
  printf(BHYEL "Coluna: %d\n" RESET, yylval.terminal->coluna);
  printf(BHYEL "Valor: %s\n" RESET, yylval.terminal->valor);
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

  mostra_tabela();

  libera_tabela();

  mostra_header();

  mostra_arvore(raiz, 0);

  mostra_footer();

  libera_arvore(raiz);

  libera_folhas();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}


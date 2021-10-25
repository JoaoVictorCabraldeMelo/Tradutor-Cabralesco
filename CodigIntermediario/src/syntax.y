
%define lr.type canonical-lr
%define parse.error verbose



%{
  #include <stdio.h>
  #include <string.h>
  #include <stdbool.h>

  #include "escopo.h"
  #include "arvore.h"
  #include "tabela.h"
  #include "colors.h"
  #include "semantic.h"
  #include "gci.h"

  #define eh "Eh funcao"
  #define nao_eh "Nao eh"


  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex();
  extern int yylex_destroy();

  int error = 0;
  int nro_argumentos = 0;
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
    $$ = aloca_no("program", $1->type);
    $$->filhos[0] = $1;
    raiz = $$;
  }

paramList:
  paramList param {
    $$ = aloca_no("paramList", "undefined");
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
    char tipo[10];

    strcpy(tipo, $1->valor);
    strcat(tipo, $2->valor);

    verify_context($3->valor);

    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = tipo;
    sim.nro_parametros = 0;
    sim.eh_parametro = false;
    sim.value = $3->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $1->escopo = -1;
    $2->escopo = -1;
    $3->escopo = escopo_atual->scope_size;
    strcpy($3->tipo, tipo);

    $$ = aloca_no("variableParam", $3->tipo);

    $$->filhos[0] = aloca_no("", $3->tipo);
    $$->filhos[1] = aloca_no("", $3->tipo);
    $$->filhos[2] = aloca_no("", $3->tipo);

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);
  }
  | TYPE ID ';' {
    Simbolo sim;

    verify_context($2->valor);

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = $1->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = false;
    sim.value = $2->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $2->escopo = escopo_atual->scope_size;

    $$ = aloca_no("variableParam", $1->valor);
    $$->filhos[0] = aloca_no("", $1->valor);
    $$->filhos[1] = aloca_no("", $1->valor);

    $1->escopo = -1;
    $2->escopo = escopo_atual->scope_size;
    strcpy($2->tipo, $1->valor);

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

    verify_context($2->valor);

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.nro_parametros = calcula_nro_parametros();
    sim.eh_parametro = false;
    sim.tipo = $1->valor;
    sim.value = $2->valor;
    sim.tipo_funcao = eh;

    Simbolo* function_symbol = coloca_simbolo(sim);

    seta_argumentos(function_symbol);

    verify_return_types($1->valor);

    $$ = aloca_no("functionParam", $1->valor);
    $$->filhos[0] = aloca_no("", $1->valor);
    $$->filhos[1] = aloca_no("", $1->valor);
    $$->filhos[2] = $4;
    $$->filhos[3] = $6;

    $1->escopo = -1;
    $2->escopo = escopo_atual->scope_size;
    strcpy($2->tipo, $1->valor);

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);

    clear_return_list();

  }
  | TYPE LISTTYPE ID '(' functionParams ')' stmt {
    Simbolo sim;
    char tipo[10];

    verify_context($3->valor);

    strcpy(tipo, $1->valor);
    strcat(tipo,$2->valor);

    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.nro_parametros = calcula_nro_parametros();
    sim.eh_parametro = false;
    sim.tipo = tipo;
    sim.tipo_funcao = eh;
    sim.value = $3->valor;

    Simbolo* function_symbol = coloca_simbolo(sim);

    seta_argumentos(function_symbol);

    verify_return_types(tipo);

    strcpy($3->tipo, tipo);

    $$ = aloca_no("functionParam", $3->tipo);
    $$->filhos[0] = aloca_no("", $3->tipo);
    $$->filhos[1] = aloca_no("", $3->tipo);
    $$->filhos[2] = aloca_no("", $3->tipo);
    $$->filhos[3] = $5;
    $$->filhos[4] = $7;

    $1->escopo = -1;
    $2->escopo = -1;
    $3->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);

    clear_return_list();
  }

functionParams:
  functionParamsList {
    $$ = $1;
  }
  | %empty {
    $$ = NULL;
  }
  | error {
    $$ = NULL;
    yyerrok;
  }

functionParamsList:
  functionParamsList ',' TYPE ID {

    Simbolo sim;

    verify_context($4->valor);

    sim.linha = $4->linha;
    sim.coluna = $4->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = $4->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = $3->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList", "undefined");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", $3->valor);
    $$->filhos[2] = aloca_no("", $3->valor);

    $3->escopo = -1;
    $4->escopo = escopo_atual->scope_size;
    strcpy($4->tipo, $3->valor);

    coloca_terminal($$->filhos[1], $3);
    coloca_terminal($$->filhos[2], $4);

  }
  | functionParamsList ',' TYPE LISTTYPE ID {


    Simbolo sim;
    char tipo[10];

    verify_context($5->valor);

    strcpy(tipo, $3->valor);
    strcat(tipo, $4->valor);

    sim.linha = $5->linha;
    sim.coluna = $5->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = $5->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    strcpy($5->tipo, tipo);

    $$ = aloca_no("functionParamsList", "undefined");
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", $5->tipo);
    $$->filhos[2] = aloca_no("", $5->tipo);
    $$->filhos[3] = aloca_no("", $5->tipo);

    $3->escopo = -1;
    $4->escopo = -1;
    $5->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[1], $3);
    coloca_terminal($$->filhos[2], $4);
    coloca_terminal($$->filhos[3], $5);

  }
  | TYPE ID {


    Simbolo sim;

    verify_context($2->valor);

    sim.linha = $2->linha;
    sim.coluna = $2->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = $2->valor;
    sim.tipo = $1->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    $$ = aloca_no("functionParamsList", $1->valor);
    $$->filhos[0] = aloca_no("", $1->valor);
    $$->filhos[1] = aloca_no("", $1->valor);

    $1->escopo = -1;
    $2->escopo = escopo_atual->scope_size;
    strcpy($2->tipo, $1->valor);

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);

  }
  | TYPE LISTTYPE ID {
    Simbolo sim;
    char tipo[10];

    verify_context($3->valor);

    strcpy(tipo, $1->valor);
    strcat(tipo, $2->valor);

    sim.linha = $3->linha;
    sim.coluna = $3->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = $3->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    strcpy($3->tipo, tipo);

    $$ = aloca_no("functionParamsList", $3->tipo);
    $$->filhos[0] = aloca_no("", $3->tipo);
    $$->filhos[1] = aloca_no("", $3->tipo);
    $$->filhos[2] = aloca_no("", $3->tipo);

    $1->escopo = -1;
    $2->escopo= -1;
    $3->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
    coloca_terminal($$->filhos[2], $3);
  }

call:
  ID '(' argList ')' {

    strcpy($1->tipo, get_type_id($1->valor, $1));

    bool ok = verify_call(nro_argumentos, $1);
    char* type;

    if(ok){
      type = $1->tipo;
      verify_arg_list($1);
    }
    else
      type = "undefined";

    $$ = aloca_no("call", type);
    $$->filhos[0] = aloca_no("", $1->tipo);
    $$->filhos[1] = $3;

    $1->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[0], $1);

    clear_arg_list();
    nro_argumentos = 0;
  }

argList:
  argList ',' ID {
    $$ = aloca_no("argList", "undefined");

    nro_argumentos++;

    strcpy($3->tipo, get_type_id($3->valor, $3));

    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", $3->tipo);

    put_arg_in_list($3->linha, $3->coluna, $3->tipo, $$->filhos[1]);

    $3->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[1], $3);
  }
  | ID {

    nro_argumentos++;

    strcpy($1->tipo, get_type_id($1->valor, $1));

    $$ = aloca_no("argList", $1->tipo);
    $$->filhos[0] = aloca_no("", $1->tipo);

    put_arg_in_list($1->linha, $1->coluna, $1->tipo, $$->filhos[0]);

    $1->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[0], $1);
  }
  | %empty {
    $$ = NULL;
  }

stmList:
  stmList stmt {
    $$ = aloca_no("stmList", "undefined");
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
    $$ = aloca_no("ifStatement", "undefined");
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $3;
    $$->filhos[2] = $5;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | IF '(' expression ')' stmt ELSE stmt {
    $$ = aloca_no("ifStatement", "undefined");
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $3;
    $$->filhos[2] = $5;
    $$->filhos[3] = aloca_no("", "undefined");
    $$->filhos[4] = $7;

    $1->escopo = -1;
    $6->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[3], $6);
  }

forStatement:
  FOR '(' expStatement expStatement expression ')' stmt {
    $$ = aloca_no("forStatement", "undefined");
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $3;
    $$->filhos[2] = $4;
    $$->filhos[3] = $5;
    $$->filhos[4] = $7;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | FOR '(' ')'  {
    $$ = NULL;
    yyerror("Error For Statement without expressions !!");
    yyerrok;
  }
  | FOR '(' expStatement expression ')'  {
    $$ = NULL;
    yyerror("Error For Statement missing one expression statement !!");
    yyerrok;
  }
  | FOR '(' expStatement expStatement ')' {
    $$ = NULL;
    yyerror("Error For Statement missing the last expression !!");
    yyerrok;
  }

returnStatement:
  RETURN expression ';' {
    if($2 != NULL){
      put_return_in_list($1->linha, $1->coluna, $2->type, $2);
      $$ = aloca_no("returnStatement", $2->type);
      $$->filhos[0] = aloca_no("", $2->type);
    }
    else{
      $$->filhos[0] = aloca_no("", "undefined");
      put_return_in_list($1->linha, $1->coluna, "undefined",$$->filhos[0]);
    }

    $$->filhos[1] = $2;
  }

inputStatement:
  INPUT '(' ID ')' ';' {
    strcpy($3->tipo, get_type_id($3->valor, $3));

    char *type = "undefined";

    bool ok = verify_input($3);

    if(ok)
      $$ = aloca_no("inputStatement", $3->tipo);
    else
      $$ = aloca_no("inputStatement", type);


    $$->filhos[0] = aloca_no("", $3->tipo);
    $$->filhos[1] = aloca_no("", $3->tipo);

    $1->escopo = -1;
    $3->escopo = escopo_atual->scope_size;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $3);
  }
  | INPUT '(' ')' ';' {
    $$ = NULL;
    yyerror("Error Input without parameter !!");
    yyerrok;
  }

outputStatement:
  OUTPUT '(' expression ')' ';' {
    if($3 != NULL)
      $$ = aloca_no("outputStatement", $3->type);
    else
      $$ = aloca_no("outputStatement", "undefined");

    char *type = "undefined";

    bool ok = verify_output($3);

    if(ok)
      $$->filhos[0] = aloca_no("", $3->type);
    else
      $$->filhos[0] = aloca_no("", type);


    $$->filhos[1] =  $3;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }

expression:
  ID ASSIGN expression  {
    strcpy($1->tipo,get_type_id($1->valor, $1));

    assign_expression_type_check($1, $3);

    $$ = aloca_no("expression", $1->tipo);
    $$->filhos[0] = aloca_no("", $1->tipo);
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $1->escopo = escopo_atual->scope_size;

    $2->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[1], $2);
  }
  | orExpression {
    $$ = $1;
  }
  | ID ASSIGN {
    $$ = NULL;
    yyerror("Error Assign Expression  missing one parameter !!");
    yyerrok;
  }
  | ASSIGN {
    $$ = NULL;
    yyerror("Error Assign Expression missing two parametes !!");
    yyerrok;
  }

orExpression:
  orExpression OR andExpression {

    char *type;

    bool ok = or_type_check($1, $3);

    if(ok)
      type = "int";
    else
      type = "undefined";

    $$ = aloca_no("orExpression", type);
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $2->escopo = -1;

    coloca_terminal($$->filhos[1], $2);

  }
  | andExpression {
    $$ = $1;
  }
  | orExpression OR {
    $$ = NULL;
    yyerror("Error Or Expression missing one parameter !!");
    yyerrok;
  }
  | OR {
    $$ = NULL;
    yyerror("Error Or Expression missing two parameters !!");
    yyerrok;
  }

andExpression:
  andExpression AND relationalExpression {

    char *type;

    bool ok = and_type_check($1, $3);

    if(ok)
      type = "int";
    else
      type = "undefined";

    $$ = aloca_no("andExpression", type);
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $2->escopo = -1;

    coloca_terminal($$->filhos[1], $2);
  }
  | relationalExpression {
    $$ = $1;
  }
  | andExpression AND {
    $$ = NULL;
    yyerror("Error And Expression missing one parameter !!");
    yyerrok;
  }
  | AND {
    $$ = NULL;
    yyerror("Error And Expression missing two parameters !!");
    yyerrok;
  }

relationalExpression:
  relationalExpression REL_OP listExpression {

    char *type;

    bool ok = rel_type_check($1, $2, $3);

    if(ok)
      type = "int";
    else
      type = "undefined";

    $$ = aloca_no("relationalExpression", type);
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $2->escopo = -1;

    coloca_terminal($$->filhos[1], $2);
  }
  | listExpression {
    $$ = $1;
  }
  | relationalExpression REL_OP {
    $$ = NULL;
    yyerror("Error Relational Expression missing one parameter !!");
    yyerrok;
  }
  | REL_OP {
    $$ = NULL;
    yyerror("Error Relational Expression missing two parameters !!");
    yyerrok;
  }

listExpression:
  arithmExpression listOP listExpression {

    char *type = list_type_check($1, $2, $3);

    $$ = aloca_no("listExpression", type);
    $$->filhos[0] = $1;
    $$->filhos[1] = $2;
    $$->filhos[2] = $3;
  }
  | arithmExpression {
    $$ = $1;
  }


arithmExpression:
  arithmExpression SUB_ADD arithmMulDivExpression {

    arithm_subadd_type_check($1, $3);

    $$ = aloca_no("arithmExpression", what_type($1, $3));
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $2->escopo = -1;

    coloca_terminal($$->filhos[1], $2);
  }
  | arithmMulDivExpression {
    $$ = $1;
  }

arithmMulDivExpression:
  arithmMulDivExpression MUL_DIV term {

    arithm_muldiv_type_check($1, $3);

    $$ = aloca_no("arithmMulDivExpression", what_type($1, $3));
    $$->filhos[0] = $1;
    $$->filhos[1] = aloca_no("", "undefined");
    $$->filhos[2] = $3;

    $2->escopo = -1;

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
    strcpy($1->tipo, get_type_id($1->valor, $1));

    $$ = aloca_no("", $1->tipo);

    $1->escopo = escopo_atual->scope_size;

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

    char *type = verify_unary_list($2, $1);

    $$ = aloca_no("unaryTerm", type);
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $2;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | '%' term {

    char *type = verify_unary_list($2, $1);

    $$ = aloca_no("unaryTerm", type);
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $2;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | '?' term {

    char *type = verify_unary_list($2, $1);

    $$ = aloca_no("unaryTerm", type);
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $2;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | SUB_ADD term {

    char *type = verify_unary_list($2, $1);

    $$ = aloca_no("unaryTerm", type);
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $2;

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }


immutable:
  '(' expression ')' {
    if($2 != NULL)
      $$ = aloca_no("immutable", $2->type);
    else 
      $$ = aloca_no("immutable", "undefined");
      
    $$->filhos[0] = aloca_no("", "undefined");
    $$->filhos[1] = $2;
    $$->filhos[2] = aloca_no("", "undefined");

    $1->escopo = -1;
    $3->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
    coloca_terminal($$->filhos[2], $3);
  }

const:
  INT {
    $$ = aloca_no("int", "int");
    $$->filhos[0] = aloca_no("", "int");

    $1->escopo = -1;
    strcpy($1->tipo, "int");

    coloca_terminal($$->filhos[0], $1);
  }
  | FLOAT {
    $$ = aloca_no("float", "float");
    $$->filhos[0] = aloca_no("", "float");

    $1->escopo = -1;
    strcpy($1->tipo, "float");

    coloca_terminal($$->filhos[0], $1);
  }
  | STRING {
    $$ = aloca_no("string", "string");
    $$->filhos[0] = aloca_no("", "string");

    $1->escopo = -1;
    strcpy($1->tipo, "string");

    coloca_terminal($$->filhos[0], $1);
  }
  | NIL {
    $$ = aloca_no("list", "list");
    $$->filhos[0] = aloca_no("", "list");

    $1->escopo = -1;
    strcpy($1->tipo, "list");

    coloca_terminal($$->filhos[0], $1);
  }

listOP:
  FUNCTION {
    char *type;

    if(strcmp($1->valor, ">>") == 0)
      type = "map";
    else
      type = "filter";


    $$ = aloca_no("listOp", type);
    $$->filhos[0] = aloca_no("", "undefined");

    $1->escopo = -1;

    coloca_terminal($$->filhos[0], $1);
  }
  | INFIX {
    $$ = aloca_no("listOp", "constructor");
    $$->filhos[0] = aloca_no("", "undefined");

    $1->escopo = -1;

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

  bota_escopo(0);

  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  } else {
    yyin = stdin;
  }

  yyparse();

  verify_main();

  mostra_tabela();

  mostra_header();

  mostra_arvore(raiz, 0);

  mostra_footer();

  if(verify_for_errors(errors_lex, error, erros_semanticos))
    show_message();
  else if(argc > 1) {
    FILE *tac_file = create_tac(argv[1]);
    write_table(tac_file);
    write_code(tac_file);
    fclose(tac_file);
  }

  libera_tabela();
  
  libera_arvore(raiz);

  libera_folhas();

  libera_escopos();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}

#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "arvore.h"
#include "tabela.h"
#include <stdbool.h>

typedef struct return_stmt Return;

typedef struct arg Arg;

struct return_stmt {
  int linha;
  int coluna;
  char *type;
  Node *expression;
  Return *next;
  Return *back;
};

struct arg {
  int linha;
  int coluna;
  char *type;
  Node *expression;
  Arg *next;
  Arg *back;
};

extern Arg *first_arg;

extern Arg *last_arg;

extern Return *first_return;

extern Return *last_return;

extern int erros_semanticos;


char* get_type_id(char *id, Folha *simbol);

void arithm_subadd_type_check(Node *expressionA, Node *expressionB);

void arithm_muldiv_type_check(Node *expressionA, Node *expressionB);

void assign_expression_type_check(Folha *id_to_be_assigned, Node* expression);

bool or_type_check(Node *expressionA, Node *expressionB);

bool and_type_check(Node *expressionA, Node *expressionB);

bool rel_type_check(Node *expressionA, Folha *operator , Node *expressionB);

char* list_type_check(Node *expressionA, Node *operator, Node *expressionB);

void assign_type(Node *expression, char *type);

bool verify_type(Node *type_expression, char *type);

bool verify_type_leaf(Folha *type_id, char *type);

void show_error(char *especific_error);

void show_semantic_error(Node *expression, char *especific_error);

void show_semantic_error_leaf(Folha *simbol, char *especific_error);

void show_semantic_error_symbol( Simbolo *simbol, char *especific_error);

void show_semantic_error_return(Return *expression, char *especific_error);

void show_semantic_error_arg(Arg *expression, char *especific_error);

char *what_type(Node *expressionA, Node *expressionB);

int get_number_of_arguments(char *id);

bool verify_call(int args, Folha *id);

char* verify_unary_list(Node *expression, Folha *operator);

bool verify_input(Folha *expression);

bool verify_output(Node *expression);

void verify_main();

void put_return_in_list(int linha, int coluna, char *type, Node* expression);

void clear_return_list();

void verify_return_types(char *type);

void put_arg_in_list(int linha, int coluna, char* type, Node* expression);

void clear_arg_list();

void verify_arg_list(Folha *id_func);

Simbolo *return_simbol(char *id);

void verify_context(char *id);

#endif

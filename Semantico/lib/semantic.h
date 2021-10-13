#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "arvore.h"
#include "tabela.h"
#include <stdbool.h>

extern int erros_semanticos;

char* get_type_id(char *id, Folha *simbol);

void arithm_subadd_type_check(Node *expressionA, Node *expressionB);

void assign_expression_type_check(Folha *id_to_be_assigned, Node* expression);

bool or_type_check(Node *expressionA, Node *expressionB);

bool and_type_check(Node *expressionA, Node *expressionB);

bool rel_type_check(Node *expressionA, Node *expressionB);

char* list_type_check(Node *expressionA, Node *operator, Node *expressionB);

void assign_type(Node *expression, char *type);

bool verify_type(Node *type_expression, char *type);

bool verify_type_leaf(Folha *type_id, char *type);

void show_semantic_error(Node *expression, char *especific_error);

void show_semantic_error_leaf(Folha *simbol, char *especific_error);

void show_semantic_error_symbol( Simbolo *simbol, char *especific_error);

char *what_type(Node *expressionA, Node *expressionB);


#endif

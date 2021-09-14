#ifndef ARVORE_H
#define ARVORE_H

#include "./tabela.h"

typedef struct Node Node;
typedef struct lex terminal;
struct lex
{
  int linha;
  int escopo;
  int coluna;
  char valor[100000];
};

struct Node
{
  struct Node *filhos[7];

  terminal *terminal_value;

  char *production_value;
};

extern Node *raiz;

Node *aloca_no(char *prod);

void coloca_terminal(Node *no, terminal terminal_value);

void mostra_arvore(Node *raiz);

void libera_arvore(Node *raiz);

#endif
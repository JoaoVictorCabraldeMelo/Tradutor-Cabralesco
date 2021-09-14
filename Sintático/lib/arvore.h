#ifndef ARVORE_H
#define ARVORE_H

typedef struct Node Node;
typedef struct lex Folha;

struct lex
{
  int linha;
  int escopo;
  int coluna;
  char valor[100000];
  Folha * next;
};
struct Node
{
  struct Node *filhos[7];

  Folha *terminal_value;

  char *production_value;
};

extern Node *raiz;

extern Folha *primeira_folha;

extern Folha *ultima_folha;

Node *aloca_no(char *prod);

Folha *aloca_folha(char *terminal);

void coloca_folha(Folha *folha);

void coloca_terminal(Node *no, Folha *terminal_value);

void mostra_arvore(Node *raiz);

void libera_arvore(Node *raiz);

void libera_folhas();

#endif
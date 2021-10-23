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
  char tipo[100];
  Folha * next;
};

struct Node
{
  struct Node *filhos[7];

  Folha *terminal_value;

  char *production_value;

  char *type;
};

extern Node *raiz;

extern Folha *primeira_folha;

extern Folha *ultima_folha;

Node *aloca_no(char *prod, char *type);

Folha *aloca_folha(char *terminal);

void coloca_folha(Folha *folha);

void coloca_terminal(Node *no, Folha *terminal_value);

void mostra_arvore(Node *raiz, int nro_tabs);

void mostra_header();

void mostra_footer();

void libera_arvore(Node *raiz);

void libera_folhas();

void put_space(int nro_tabs);

#endif

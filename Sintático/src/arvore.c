#include "../lib/arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *raiz = NULL;

Folha *primeira_folha = NULL;

Folha *ultima_folha = NULL;

Node *aloca_no(char *production)
{
  Node *novo_no = (Node *) malloc(sizeof(Node));

  novo_no->terminal_value = NULL;
  novo_no->production_value = strdup(production);

  novo_no->filhos[0] = NULL;
  novo_no->filhos[1] = NULL;
  novo_no->filhos[2] = NULL;
  novo_no->filhos[3] = NULL;
  novo_no->filhos[4] = NULL;
  novo_no->filhos[5] = NULL;
  novo_no->filhos[6] = NULL;

  return novo_no;
}

Folha *aloca_folha(char *terminal){
  Folha * nova_folha = (Folha *) malloc(sizeof(Folha));

  nova_folha->linha = 0;
  nova_folha->coluna = 0;
  nova_folha->escopo = 0;
  nova_folha->next = NULL;
  strcpy(nova_folha->valor, terminal);

  return nova_folha;
}

void coloca_terminal (Node *no, Folha *terminal)
{
  no->terminal_value = terminal;
}

void mostra_arvore(Node *raiz)
{
  if (raiz == NULL)
    return;
  if (raiz->terminal_value != NULL)
    printf("%s", raiz->terminal_value->valor);
  for (int i = 0; i < 7; i++)
    mostra_arvore(raiz->filhos[i]);
}

void libera_arvore(Node *raiz)
{
  if (raiz == NULL)
    return;
  for (int i = 0; i < 7; i++)
    libera_arvore(raiz->filhos[i]);
  free(raiz->production_value);
  free(raiz);
}

void coloca_folha(Folha *nova_folha)
{
  if (primeira_folha == NULL && ultima_folha == NULL)
  {
    primeira_folha = nova_folha;
    ultima_folha = nova_folha;
  }
  else
  {
    ultima_folha->next = nova_folha;
    ultima_folha = nova_folha;
  }
}

void libera_folhas()
{
  if (primeira_folha != NULL)
  {
    Folha *tmp = primeira_folha;
    while (tmp != NULL)
    {
      Folha *aux;
      aux = tmp;
      tmp = tmp->next;
      free(aux);
    }
  }
}
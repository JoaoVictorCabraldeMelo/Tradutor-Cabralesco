#include "arvore.h"
#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *raiz = NULL;

Folha *primeira_folha = NULL;

Folha *ultima_folha = NULL;

void put_space(int nro_tabs){
  for (int i = 0; i < nro_tabs; i++)
    printf(" ");
}


Node *aloca_no(char *production, char *type)
{
  Node *novo_no = (Node *)malloc(sizeof(Node));

  novo_no->terminal_value = NULL;
  novo_no->production_value = strdup(production);
  novo_no->type = strdup(type);

  novo_no->filhos[0] = NULL;
  novo_no->filhos[1] = NULL;
  novo_no->filhos[2] = NULL;
  novo_no->filhos[3] = NULL;
  novo_no->filhos[4] = NULL;
  novo_no->filhos[5] = NULL;
  novo_no->filhos[6] = NULL;

  return novo_no;
}

Folha *aloca_folha(char *terminal)
{
  Folha *nova_folha = (Folha *)malloc(sizeof(Folha));

  nova_folha->linha = 0;
  nova_folha->coluna = 0;
  nova_folha->escopo = 0;
  nova_folha->next = NULL;
  strcpy(nova_folha->valor, terminal);

  return nova_folha;
}

void coloca_terminal(Node *no, Folha *terminal)
{
  no->terminal_value = terminal;
}

void mostra_arvore(Node *raiz, int nro_tabs)
{
  if (raiz == NULL)
    return;

  put_space(nro_tabs);

  if (strcmp(raiz->production_value, "") != 0 )
    printf(HMAG "%s (%s)\n" RESET, raiz->production_value, raiz->type);
  else if(strcmp(raiz->type, "int_to_float") == 0 || strcmp(raiz->type, "float_to_int") == 0) {
    printf(UYEL "(%s)\n" RESET, raiz->type);
    put_space(nro_tabs+1);
  }

  if (raiz->terminal_value != NULL)
  {
    if (raiz->terminal_value->escopo >= 0)
      printf(HMAG "»» " RESET BYEL " %s <escopo: %d> <%s>\n" RESET, raiz->terminal_value->valor, raiz->terminal_value->escopo, raiz->terminal_value->tipo);
    else
      printf(HMAG "»» " RESET BYEL " %s\n" RESET, raiz->terminal_value->valor);
  }
  for (int i = 0; i < 7; i++)
    mostra_arvore(raiz->filhos[i], nro_tabs + 1);
}

void libera_arvore(Node *raiz)
{
  if (raiz == NULL)
    return;
  for (int i = 0; i < 7; i++)
    libera_arvore(raiz->filhos[i]);
  free(raiz->production_value);
  free(raiz->type);
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

void mostra_header()
{
  printf("\n\n\n");
  printf(HMAG "###############################\n" RESET);
  printf(HMAG "## " RESET BYEL "Arvore Sintatica Abstrata " RESET HMAG "##\n");
  printf(HMAG "###############################\n" RESET);
  printf("\n\n\n");
}

void mostra_footer()
{
  printf("\n\n\n");
  printf(HMAG "================================\n" RESET);
}

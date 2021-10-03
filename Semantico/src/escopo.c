#include "escopo.h"
#include <stdio.h>
#include <stdlib.h>

Escope *escopo_atual = NULL;

Escope *escopo_global = NULL;

Escope *primeiro_escopo = NULL;

Escope *ultimo_escopo = NULL;

Escope *bota_escopo()
{
  Escope *novo_escopo = (Escope *)malloc(sizeof(Escope));

  //Caso que nao tenha um escopo_global cria ele
  if (escopo_global == NULL)
  {
    novo_escopo->scope_size = 0;

    novo_escopo->superior = NULL;

    coloca_escopo_na_lista(novo_escopo);

    escopo_global = novo_escopo;

    escopo_atual = novo_escopo;

    return novo_escopo;
  }
  else
  {
    //aloca novo escopo que nao e global
    novo_escopo->scope_size = escopo_atual->scope_size+1;

    novo_escopo->superior = escopo_atual;

    coloca_escopo_na_lista(novo_escopo);

    escopo_atual = novo_escopo;

    return novo_escopo;
  }
}

void fecha_escopo()
{
  if (escopo_atual->superior != NULL)
    escopo_atual = escopo_atual->superior;
}

void coloca_escopo_na_lista(Escope *escope)
{
  escope->next = NULL;

  if (primeiro_escopo == NULL && ultimo_escopo == NULL)
  {
    primeiro_escopo = escope;
    ultimo_escopo = escope;
  }
  else
  {
    ultimo_escopo->next = escope;
    ultimo_escopo = escope;
  }
}

void libera_escopos()
{
  if (primeiro_escopo != NULL)
  {
    Escope *tmp = primeiro_escopo;
    while (tmp != NULL)
    {
      Escope *aux;
      aux = tmp;
      tmp = tmp->next;
      free(aux);
    }
  }
}
#include "../lib/pilha.h"
#include <stdio.h>
#include <stdlib.h>

Pilha *criaNo(char escope)
{
  Pilha *novoNo = (Pilha *)malloc(sizeof(Pilha));
  novoNo->next = NULL;
  novoNo->value = escope;
  return novoNo;
}

int taVazia(Pilha *topo)
{
  return !topo;
}

void push(Pilha **topo, char escope)
{
  Pilha *novoNo = criaNo(escope);
  novoNo->next = *topo;
  *topo = novoNo;
}

char pop(Pilha **topo)
{
  if (taVazia(*topo))
  {
    printf("Pilha está vazia");
    return NULL;
  }
  Pilha *temp = *topo;
  char value = temp->value;
  *topo = (*topo)->next;
  free(temp);
  return value;
}

void freePilha(Pilha **topo){
  while(taVazia(*topo)){
    pop(topo);
  }
}

int main() {
  Pilha *topo = NULL;

  push(&topo, '{');
  push(&topo, '}');
  push(&topo, '{');

  freePilha(topo);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tabela.h"
#include "arvore.h"
#include "colors.h"
#include "semantic.h"
#include "escopo.h"

int erros_semanticos = 0;

Return *first_return = NULL;

Return *last_return = NULL;

Arg *first_arg = NULL;

Arg *last_arg = NULL;


void assign_type(Node *expression, char *type){
  strcpy(expression->type, type);
}

bool verify_type(Node *type_expression, char *type){
  if(type_expression != NULL){
    if(strcmp(type_expression->type, type) == 0)
      return true;
    else
      return false;
  }
  return false;
}

bool verify_type_leaf(Folha *type_id, char *type){
  if(strcmp(type_id->tipo, type) == 0)
    return true;
  else
    return false;
}

void show_semantic_error_return(Return *expression, char *especific_error) {
  printf(RED "Semantic Errors: %d\n" RESET, erros_semanticos);
  erros_semanticos++;
  if(expression != NULL){
    printf(RED "Error Semantico na Linha: %d\t" RESET, expression->linha);
    printf(RED "Coluna: %d\n" RESET, expression->coluna);
  }
  printf(RED "%s\n" RESET, especific_error);
}

void show_semantic_error(Node *expression, char* especific_error){
  printf(RED "Semantic Errors: %d\n" RESET, erros_semanticos);
  if(expression != NULL){
    if(expression->terminal_value != NULL) {
        printf(RED "Error Semantico na Linha: %d\t" RESET, expression->terminal_value->linha);
        printf(RED "Coluna: %d\n" RESET, expression->terminal_value->coluna);
    }
  }
  printf(RED "%s\n" RESET, especific_error);
  erros_semanticos++;
}

void show_semantic_error_leaf(Folha *simbol, char *especific_error){
  erros_semanticos++;
  printf(RED "Semantic Errors: %d\n" RESET, erros_semanticos);
  if(simbol != NULL){
    printf(RED "Error Semantico na Linha: %d\t" RESET, simbol->linha);
    printf(RED "Coluna: %d\n" RESET, simbol->coluna);
  }
  printf(RED "%s\n" RESET, especific_error);
}


void show_semantic_error_symbol(Simbolo *simbol, char *especific_error){
  erros_semanticos++;
  printf(RED "Semantic Erros: %d\n" RESET, erros_semanticos);
  if(simbol != NULL){
    printf(RED "Error Semantico na Linha: %d\t" RESET, simbol->linha);
    printf(RED "Error Semantico na Coluna: %d\n" RESET, simbol->coluna);
  }
  printf(RED "%s\n" RESET, especific_error);
}

void show_error(char *especific_error) {
  erros_semanticos++;
  printf(RED "Semantic Erros: %d\n" RESET, erros_semanticos);
  printf(RED "%s\n" RESET, especific_error);
}


void show_semantic_error_arg(Arg *expression, char *especific_error) {
  erros_semanticos++;
  printf(RED "Semantic Erros: %d\n" RESET, erros_semanticos);
  if(expression != NULL){
    printf(RED "Error Semantico na Linha: %d\t" RESET, expression->linha);
    printf(RED "Error Semantico na Coluna: %d\n" RESET, expression->coluna);
  }
  printf(RED "%s\n" RESET, especific_error);
}

Simbolo *return_simbol(char *id){
  if( first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, id) == 0)
        break;

      tmp = tmp->next;
    }

    if (tmp == NULL)
      return NULL;
    else
      return tmp;
  }

  return NULL;
}


char *get_type_id(char *id, Folha *simbol)
{

  char *nao_foi_declarado = "Erro Semantico: O identifier nao foi declarado !!\n";
  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, id) == 0)
        break;

      tmp = tmp->next;
    }

    if (tmp == NULL){
      show_semantic_error_leaf(simbol, nao_foi_declarado);
      return "undefined";
    }
    else
      return tmp->tipo;
  }

  show_semantic_error_leaf(simbol, nao_foi_declarado);
  return "undefined";
}

int get_number_of_arguments(char *id) {
  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, id) == 0)
        break;
      tmp = tmp->next;
    }

    if (tmp == NULL){
      return -1;
    }
    else
      return tmp->nro_parametros;
  }

  return -1;
}



void arithm_subadd_type_check(Node *expressionA, Node *expressionB)
{

  if(
      (verify_type(expressionA, "int") || verify_type(expressionA, "float")) &&
      (verify_type(expressionB, "int" ) || verify_type(expressionB, "float"))
    )
  {
    if(verify_type(expressionA, "int") && verify_type(expressionB, "float"))
      assign_type(expressionA, "int_to_float");
    else if(verify_type(expressionA, "float") && verify_type(expressionB, "int"))
      assign_type(expressionB, "int_to_float");
  }else{
    if(!verify_type(expressionA, "int") && !verify_type(expressionB, "float"))
      show_semantic_error(expressionA, "Expressão A de Soma e Subtração deve ser do tipo int ou float");
    if(!verify_type(expressionB, "int") && !verify_type(expressionB, "float"))
      show_semantic_error(expressionB, "Expressão B de Soma e Subtração deve ser do tipo int ou float");
  }
}

void assign_expression_type_check(Folha *id_to_be_assigned, Node* expression)
{
  if(expression != NULL){
    if(strcmp(id_to_be_assigned->tipo, "undefined") != 0) {
      if(!verify_type(expression, id_to_be_assigned->tipo)){
          if(verify_type_leaf(id_to_be_assigned, "float") && !verify_type(expression, "int") && !verify_type(expression, "int_to_float"))
            show_semantic_error(expression, "Identifier do tipo float só pode ser atribuído por expressões do tipo int ou float");
          else if(verify_type_leaf(id_to_be_assigned, "float") && verify_type(expression, "int"))
            assign_type(expression, "int_to_float");
          else if(verify_type_leaf(id_to_be_assigned, "int") && !verify_type(expression, "float"))
            show_semantic_error(expression, "Identifier do tipo int só pode ser atribuído por expressão do tipo int ou float");
          else if(verify_type_leaf(id_to_be_assigned, "int") && verify_type(expression, "float"))
            assign_type(expression, "float_to_int");
          else if(verify_type_leaf(id_to_be_assigned, "intlist") && !verify_type(expression, "list"))
            show_semantic_error(expression, "Identifier do tipo int list só pode ser atribuído por expressão do tipo int list ou NIL");
          else if(verify_type_leaf(id_to_be_assigned, "floatlist") && !verify_type(expression, "list"))
            show_semantic_error(expression, "Identifier do tipo float list só pode ser atribuído por expressão do tipo float list ou NIL");
      }
    }
  }
}

bool or_type_check(Node *expressionA, Node *expressionB)
{

  if(verify_type(expressionA, "float") && verify_type(expressionB, "float")){
    assign_type(expressionA, "float_to_int");
    assign_type(expressionB, "float_to_int");
    return true;
  }

  if(!verify_type(expressionA, "int") && !verify_type(expressionB, "int") && !verify_type(expressionA, "float") && !verify_type(expressionB, "float")){
    show_semantic_error(expressionA, "Expressões de OR lógico devem ser do tipo int ou float");
    return false;
  }
  else {
    if(!verify_type(expressionA, "int") && !verify_type(expressionA, "float")){
      show_semantic_error(expressionA, "Expressão A de OR lógico deve ser do tipo int ou float");
      return false;
    }else if (verify_type(expressionA, "float")){
      assign_type(expressionA, "float_to_int");
      return true;
    }

    if(!verify_type(expressionB, "int") && !verify_type(expressionB, "float")) {
      show_semantic_error(expressionB, "Expressão B de OR lógico deve ser do tipo int");
      return false;
    } else if (verify_type(expressionB, "float")){
      assign_type(expressionB, "float_to_int");
      return true;
    }
  }

  return true;
}

bool and_type_check(Node *expressionA, Node *expressionB)
{
  if(verify_type(expressionA, "float") && verify_type(expressionB, "float")){
    assign_type(expressionA, "float_to_int");
    assign_type(expressionB, "float_to_int");
    return true;
  }


  if(!verify_type(expressionA, "int") && !verify_type(expressionB, "int") && !verify_type(expressionA, "float") && !verify_type(expressionB, "float")){
    show_semantic_error(expressionA, "Expressões de AND lógico devem ser do tipo int ou float");
    return false;
  }
  else {
    if(!verify_type(expressionA, "int") && !verify_type(expressionA, "float")){
      show_semantic_error(expressionA, "Expressão A de AND lógico deve ser do tipo int ou float");
      return false;
    } else if(verify_type(expressionA, "float")){
      assign_type(expressionA, "float_to_int");
      return true;
    }

    if(!verify_type(expressionB, "int") && !verify_type(expressionB, "float")){
      show_semantic_error(expressionA, "Expressão B de AND lógico deve ser do tipo int ou float");
      return false;
    }else if(verify_type(expressionB, "float")){
      assign_type(expressionB, "float_to_int");
      return true;
    }
  }

  return true;
}

bool rel_type_check(Node *expressionA, Folha *operator, Node *expressionB){

  if(strcmp(operator->valor, "==") != 0 && strcmp(operator->valor, "!=") != 0){
    if(verify_type(expressionA, "float") && verify_type(expressionB, "float")){
      assign_type(expressionA, "float_to_int");
      assign_type(expressionB, "float_to_int");
      return true;
    }

    if(!verify_type(expressionA, "int")  && !verify_type(expressionA, "float")){
      show_semantic_error(expressionA, "Expressão A de Comparação lógico deve ser do tipo int ou float");
      return false;
    } else if(verify_type(expressionA, "float")){
      assign_type(expressionA, "float_to_int");
      return true;
    }

    if(!verify_type(expressionB, "int") && !verify_type(expressionB, "float")){
      show_semantic_error(expressionB, "Expressão B de Comparação lógico deve ser do tipo int ou float");
      return false;
    } else if(verify_type(expressionB, "float")){
      assign_type(expressionB, "float_to_int");
      return true;
    }
  } else {
    if(verify_type(expressionA, "float") && verify_type(expressionB, "float")){
      assign_type(expressionA, "float_to_int");
      assign_type(expressionB, "float_to_int");
      return true;
    } else if(verify_type(expressionA, "int") && verify_type(expressionB, "float")){
      assign_type(expressionB, "float_to_int");
      return true;
    } else if(verify_type(expressionA, "float") && verify_type(expressionB, "int")){
      assign_type(expressionA, "float_to_int");
      return true;
    } else if(verify_type(expressionA, "floatlist") && !verify_type(expressionB, "list")){
      show_semantic_error(expressionB, "Expressão B de comparação lógico com o tipo floatlist só pode ser NIL");
      return false;
    } else if(!verify_type(expressionA, "list") && verify_type(expressionB, "floatlist")){
      show_semantic_error(expressionB, "Expressão A de comparação lógico com o tipo floatlist só pode ser NIL");
      return false;
    } else if(verify_type(expressionA, "intlist") && !verify_type(expressionB, "list")){
      show_semantic_error(expressionA, "Expressão B de comparação lógica com o tipo intlist só pode ser NIL");
      return false;
    } else if(!verify_type(expressionA, "list") && verify_type(expressionB, "intlist")){
      show_semantic_error(expressionA, "Expressão A de comparação lógica com o tipo intlist só pode ser NIL");
      return false;
    }
  }

  return true;
}


char* list_type_check(Node *expressionA, Node *operator, Node *expressionB){
  if(verify_type(operator, "constructor")){
    if(!verify_type(expressionB, "intlist") && !verify_type(expressionB, "floatlist") && !verify_type(expressionB, "list")){
      show_semantic_error(expressionB, "Expressão B de um constructor de list deve possuir um tipo int list ou float list ou NIL");
      return "undefined";
    }
    else {
      if(verify_type(expressionA, "float") && verify_type(expressionB, "intlist")){
        assign_type(expressionA, "float_to_int");
        return "intlist";
      }
      else if(verify_type(expressionA, "int") && verify_type(expressionB, "intlist"))
        return "intlist";
      else if(verify_type(expressionA, "int") && verify_type(expressionB, "floatlist")){
        assign_type(expressionA, "int_to_float");
        return "floatlist";
      }
      else if(verify_type(expressionA, "float") && verify_type(expressionB, "floatlist"))
        return "floatlist";
      else if(verify_type(expressionA, "int") && verify_type(expressionB, "list"))
        return "intlist";
      else if(verify_type(expressionA, "float") && verify_type(expressionB, "list"))
        return "floatlist";
      else{
          show_semantic_error(expressionA, "Expression A de um constructor deve possuir um tipo int ou float");
          return "undefined";
      }
    }
  } else if(verify_type(operator, "map")){
    if(!verify_type(expressionB, "intlist") && !verify_type(expressionB, "floatlist") && !verify_type(expressionB, "list")){
      show_semantic_error(expressionB, "Expressão B de um map deve possuir um tipo int list ou float list ou NIL");
      return "undefined";
    } else if(expressionA != NULL && expressionA->terminal_value != NULL){
      if(get_number_of_arguments(expressionA->terminal_value->valor) == 1){
        if(verify_type(expressionA, "int"))
          return "intlist";
        else if(verify_type(expressionA, "float"))
          return "floatlist";
        else
          return expressionA->terminal_value->tipo;
      }else {
        show_semantic_error(expressionA, "Expressão A de um map deve ser uma função unária");
        return "undefined";
      }
    }
  } else if(verify_type(operator, "filter")) {
    if(!verify_type(expressionB, "intlist") && !verify_type(expressionB, "floatlist") && !verify_type(expressionB, "list")){
      show_semantic_error(expressionB, "Expressão B de um filter deve possuir um tipo int list ou float list ou NIL");
      return "undefined";
    } else if(expressionA != NULL && expressionA->terminal_value != NULL){
      if(get_number_of_arguments(expressionA->terminal_value->valor) == 1){
        return expressionB->type;
      } else {
        show_semantic_error(expressionA, "Expressão A de um filter deve ser uma função unária");
        return "undefined";
      }
    }
  }

  return "undefined";
}


char *what_type(Node *expressionA, Node *expressionB)
{
  if(verify_type(expressionA, "int") && verify_type(expressionB, "int"))
    return "int";
  if(verify_type(expressionA, "int_to_float") && verify_type(expressionB, "float"))
    return "float";
  if(verify_type(expressionA, "float") && verify_type(expressionB, "int_to_float"))
    return "float";
  if(verify_type(expressionA, "float") && verify_type(expressionB, "float"))
    return "float";
  if(verify_type(expressionA, "float_to_int") && verify_type(expressionB, "int"))
    return "int";
  if(verify_type(expressionA, "int") && verify_type(expressionB, "float_to_int"))
    return "int";


  return "undefined";
}

void arithm_muldiv_type_check(Node *expressionA, Node *expressionB){
  if(
      (verify_type(expressionA, "int") || verify_type(expressionA, "float")) &&
      (verify_type(expressionB, "int" ) || verify_type(expressionB, "float"))
    )
  {
    if(verify_type(expressionA, "int") && verify_type(expressionB, "float"))
      assign_type(expressionA, "int_to_float");
    else if(verify_type(expressionA, "float") && verify_type(expressionB, "int"))
      assign_type(expressionB, "int_to_float");
  }else{
    if(!verify_type(expressionA, "int") && !verify_type(expressionB, "float"))
      show_semantic_error(expressionA, "Expressão A de Soma e Subtração deve ser do tipo int ou float");
    if(!verify_type(expressionB, "int") && !verify_type(expressionB, "float"))
      show_semantic_error(expressionB, "Expressão B de Soma e Subtração deve ser do tipo int ou float");
  }
}

bool verify_call(int args, Folha *call) {
  if(get_number_of_arguments(call->valor) == args)
    return true;
  else{
    show_semantic_error_leaf(call, "Chamada de função com número de argumentos diferente do definido");
    return false;
  }
}

char* verify_unary_list(Node *expression, Folha *operator) {
  if(expression != NULL){
    if(strcmp(operator->valor, "%") == 0 || strcmp(operator->valor, "?") == 0 ) {
      if(verify_type(expression, "int") || verify_type(expression, "float") || verify_type(expression, "list")){
        show_semantic_error(expression, "Operações unárias de lista só podem ser chamadas com os tipos intlist ou floatlist");
        return "undefined";
      } else if(strcmp(operator->valor, "%") == 0) {
        return expression->type;
      } else {
        if(verify_type(expression, "intlist"))
          return "int";
        if(verify_type(expression, "floatlist"))
          return "float";
      }
    } else if(strcmp(operator->valor, "!") == 0) {
      if(verify_type(expression, "float")){
        assign_type(expression, "float_to_int");
        return "int";
      }
      if(verify_type(expression, "int"))
        return "int";
      if(verify_type(expression, "intlist") || verify_type(expression, "floatlist"))
        return expression->type;
      else {
        show_semantic_error(expression, "Operação de tail ! não pode ser aplicada na constante NIL");
        return "undefined";
      }
    } else {
      if(!verify_type(expression, "int") && !verify_type(expression, "float")) {
        show_semantic_error(expression, "Constantes negativas ou positivas só podem ser do tipo int ou float");
        return "undefined";
      } else {
        if(verify_type(expression, "int"))
          return "int";
        if(verify_type(expression,"float"))
          return "float";
      }
    }
  }

  return "undefined";
}

bool verify_output(Node *expression) {
  if(!verify_type(expression, "int") && !verify_type(expression, "float") && !verify_type(expression, "string")){
    show_semantic_error(expression, "Output só pode os tipo int ou float ou string");
    return false;
  }

  return true;
}

bool verify_input(Folha *expression){
  if(strcmp(expression->tipo, "int") != 0 && strcmp(expression->tipo, "float") != 0){
    show_semantic_error_leaf(expression, "Input só pode os tipos int ou float");
    return false;
  }

  return true;
}

void verify_main() {
  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, "main") == 0 && strcmp(tmp->tipo_funcao, "Eh funcao") == 0)
        break;
      tmp = tmp->next;
    }

    if (tmp == NULL)
      show_error("Programa sem uma função main");
  }
}

void put_return_in_list(int linha, int coluna, char *type, Node* expression) {
  Return *novo_return = (Return *)malloc(sizeof(Return));
  novo_return->linha = linha;
  novo_return->coluna = coluna;
  novo_return->type = strdup(type);
  novo_return->expression = expression;


  if (first_return == NULL && last_return == NULL)
  {
    first_return = novo_return;
    last_return = novo_return;
  }
  else
  {
    last_return->next = novo_return;
    novo_return->back = last_return;
    last_return = novo_return;
  }
}

void clear_return_list() {
  if (first_return != NULL)
  {
    Return *tmp = first_return;
    while (tmp != NULL)
    {
      Return *aux;
      aux = tmp;
      free(aux->type);
      tmp = tmp->next;
      free(aux);
    }

    first_return = NULL;
    last_return = NULL;
  }
}

void verify_return_types(char *type) {
  if (first_return != NULL)
  {
    Return *tmp = first_return;
    while (tmp != NULL)
    {
      if (!verify_type(tmp->expression, type)){
        if(verify_type(tmp->expression, "int") && strcmp(type, "float") == 0){
          assign_type(tmp->expression, "int_to_float");
        }
        if(verify_type(tmp->expression, "float") && strcmp(type, "int") == 0){
          assign_type(tmp->expression, "float_to_int");
        }
        if(verify_type(tmp->expression, "list") && strcmp(type, "intlist") != 0 && strcmp(type, "floatlist") != 0){
          show_semantic_error_return(tmp, "Return com o tipo NIL não pode ser convertido ao tipo int ou float");
        }
        if(verify_type(tmp->expression, "int") && (strcmp(type, "intlist") == 0 || strcmp(type, "floatlist") == 0) ){
          show_semantic_error_return(tmp, "Return com o tipo int não pode ser converitdo ao tipo intlist ou floatlist");
        }
        if(verify_type(tmp->expression, "float") && (strcmp(type, "intlist") == 0 || strcmp(type, "floatlist") == 0)) {
          show_semantic_error_return(tmp, "Return com tipo float não pode ser convertido ao tipo intlist ou floatlist");
        }
        if(verify_type(tmp->expression, "intlist")  && strcmp(type, "intlist") != 0){
          show_semantic_error_return(tmp, "Return com o tipo int list não pode ser atribuido a um tipo diferente");
        }
        if(verify_type(tmp->expression, "floatlist") && strcmp(type, "floatlist") != 0){
          show_semantic_error_return(tmp, "Return com o tipo float list não pode ser atribuido a um tipo diferente");
        }
      }
      tmp = tmp->next;
    }
  }
}

void put_arg_in_list(int linha, int coluna, char* type, Node* expression) {
  Arg *novo_arg = (Arg *)malloc(sizeof(Arg));
  novo_arg->linha = linha;
  novo_arg->coluna = coluna;
  novo_arg->type = strdup(type);
  novo_arg->expression = expression;


  if (first_arg == NULL && last_arg == NULL)
  {
    first_arg = novo_arg;
    last_arg = novo_arg;
  }
  else
  {
    last_arg->next = novo_arg;
    novo_arg->back = last_arg;
    last_arg = novo_arg;
  }
}

void clear_arg_list() {
  if (first_arg != NULL)
  {
    Arg *tmp = first_arg;
    while (tmp != NULL)
    {
      Arg *aux;
      aux = tmp;
      free(aux->type);
      tmp = tmp->next;
      free(aux);
    }

    first_arg = NULL;
    last_arg = NULL;
  }
}

void verify_arg_list(Folha *id_func) {

  Simbolo *func = return_simbol(id_func->valor);


  if(last_arg != NULL && func != NULL){
    Arg *tmp_call = last_arg;
    Arg_Type *tmp_func = func->first_arg_type;
    while(tmp_call != NULL && tmp_func != NULL){
      Arg *aux_call = tmp_call;
      Arg_Type *aux_func = tmp_func;

      if(strcmp(aux_call->type, aux_func->tipo) != 0){
        if(strcmp(aux_call->type, "int") == 0 && strcmp(aux_func->tipo, "float") != 0)
          show_semantic_error_arg(aux_call, "Chamada com o tipo int de parametro que não pode ser convertido ao tipo do argumento da função");
        else if(strcmp(aux_call->type, "int") == 0 && strcmp(aux_func->tipo, "float") == 0)
          assign_type(aux_call->expression, "int_to_float");
        else if(strcmp(aux_call->type, "float") ==  0 && strcmp(aux_func->tipo, "int") != 0)
          show_semantic_error_arg(aux_call, "Chamada com o tipo float de parametro que não pode ser convertido ao tipo do argumento da função");
        else if(strcmp(aux_call->type, "float") == 0 && strcmp(aux_func->tipo, "int") == 0)
          assign_type(aux_call->expression, "float_to_int");
        else if(strcmp(aux_call->type, "list") == 0 && strcmp(aux_func->tipo, "intlist") != 0 && strcmp(aux_func->tipo, "floatlist") != 0)
          show_semantic_error_arg(aux_call, "Chamada com a constante NIL porém argumento de função não é int list ou float list");
        else
          show_semantic_error_arg(aux_call, "Chamada com o tipo que não conversão com o argumento da função");
      }

      tmp_func = tmp_func->next;
      tmp_call = tmp_call->back;
    }
  }

}


void verify_context(char *id){
  if(first != NULL){
    Simbolo *tmp = first;
    while(tmp != NULL){
      if(strcmp(tmp->value, id) == 0 && escopo_atual->scope_size == tmp->escopo)
        show_error("Variavel ou função redeclarada no mesmo contexto!!");
      tmp = tmp->next;
    }
  }
}

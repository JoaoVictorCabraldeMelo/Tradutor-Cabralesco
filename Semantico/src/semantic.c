#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tabela.h"
#include "arvore.h"
#include "colors.h"

int erros_semanticos = 0;


void assign_type(Node *expression, char *type){
  strcpy(expression->type, type);
}

bool verify_type(Node *type_expression, char *type){
  if(strcmp(type_expression->type, type) == 0)
    return true;
  else
    return false;
}

bool verify_type_leaf(Folha *type_id, char *type){
  if(strcmp(type_id->tipo, type) == 0)
    return true;
  else
    return false;
}

void show_semantic_error(Node *expression, char* especific_error){
  erros_semanticos++;
  printf(RED "Semantic Errors: %d\n" RESET, erros_semanticos);
  if(expression->terminal_value != NULL) {
      printf(RED "Error Semantico na Linha: %d\t" RESET, expression->terminal_value->linha);
      printf(RED "Coluna: %d\n" RESET, expression->terminal_value->coluna);
  }
  printf(RED "%s\n" RESET, especific_error);
}

void show_semantic_error_leaf(Folha *simbol, char *especific_error){
  erros_semanticos++;
  printf(RED "Semantic Errors: %d\n" RESET, erros_semanticos);
  printf(RED "Error Semantico na Linha: %d\t" RESET, simbol->linha);
  printf(RED "Coluna: %d\n" RESET, simbol->coluna);
  printf(RED "%s\n" RESET, especific_error);
}


void show_semantic_error_symbol(Simbolo *simbol, char *especific_error){
  erros_semanticos++;
  printf(RED "Semantic Erros: %d\n" RESET, erros_semanticos);
  printf(RED "Error Semantico na Linha: %d\t" RESET, simbol->linha);
  printf(RED "Error Semantico na Coluna: %d\n" RESET, simbol->coluna);
  printf(RED "%s\n" RESET, especific_error);
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

bool rel_type_check(Node *expressionA, Node *expressionB){

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
      show_semantic_error(expressionB, "Expressão B de um constructor de list deve possuir um tipo int list ou float list ou NIL");
      return "undefined";
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

#include<stdio.h>
#include<stdlib.h>

struct pessoa {
  char nome[20];
  int idade;
  };
  
  int main(){
  struct pessoa VAR1={"Rafa",21};
  printf("nome: %s Idade: %d\n", VAR1.nome,VAR1.idade);
  }
  

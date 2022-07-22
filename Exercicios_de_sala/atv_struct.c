#include<stdio.h>
#include<stdlib.h>

struct pessoa {
  char nome[20];
  int idade;
  };
  
  int main(){
  struct pessoa VAR1;
  printf("Digite um nome:\n");
  scanf("%s" , VAR1.nome);
  printf("Digite a idade:\n");
  scanf("%d" , &VAR1.idade);
  
  printf("nome: %s Idade: %d\n", VAR1.nome,VAR1.idade);
  }
  

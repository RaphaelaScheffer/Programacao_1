#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char nome[20];
  int idade;
  float nota;
  }tipo_aluno;
  
  int main(){
  //vetor sem o for
  tipo_aluno aluno[2];
   printf("Digite um nome:\n");
  scanf("%s" , aluno[0].nome);
  printf("Digite a idade:\n");
  scanf("%d" , &aluno[0].idade); 
   printf("Digite a nota:\n");
  scanf("%f" , &aluno[0].nota);
     printf("Digite um nome:\n");
  scanf("%s" , aluno[1].nome);
  printf("Digite a idade:\n");
  scanf("%d" , &aluno[1].idade); 
   printf("Digite a nota:\n");
  scanf("%f" , &aluno[1].nota);
  
  printf(" nome: %s\n Idade: %d\n Nota: %f\n", aluno[0].nome,aluno[0].idade,aluno[0].nota); 
   printf(" nome: %s\n Idade: %d\n Nota: %f\n", aluno[1].nome,aluno[1].idade,aluno[1].nota); 
  }
  

#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char nome[20];
  int idade;
  float nota;
  }tipo_aluno;
  
  int main(){
  //vetor com for
  tipo_aluno aluno[3];
  int i;
  
  for(i=0;i<3;i++)
  {
   printf("Digite um nome:\n");
  scanf("%s" , aluno[i].nome);
  printf("Digite a idade:\n");
  scanf("%d" , &aluno[i].idade); 
   printf("Digite a nota:\n");
  scanf("%f" , &aluno[i].nota);
  }
   for(i=0;i<3;i++){
  printf(" nome[%d]: %s\n Idade[%d]: %d\n Nota[%d]: %f\n",i, aluno[i].nome,i,aluno[i].idade,i,aluno[i].nota); 
  }}

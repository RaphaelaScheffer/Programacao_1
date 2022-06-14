#include <stdio.h>

/* Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).*/

// if

int main(){

      float p1, p2, media;
      char nome[30];

     printf("Nome do aluno:\n ");
     scanf("%s", &nome);
     printf("Digite a nota da prova 1:\n ");
     scanf("%f",&p1);
     printf("Digite a nota da prova 2:\n ");
     scanf("%f",&p2);
     media = (p1 + p2) / 2;

    printf("\nDados: \n");
    printf("Aluno: %s \n", nome);
    printf("Notas: P1 = %f P2 = %f \n", p1, p2);
    printf("Media: %f \n", media);

    if (media >= 7){
     printf("\nAprovado!\n");}
    else if (media >= 3){
     printf("\nProva final!\n");}
    else {
     printf("\nReprovado!\n");}

    return 0;
  }



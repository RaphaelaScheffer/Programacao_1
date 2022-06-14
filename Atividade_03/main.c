#include <stdio.h>

/* A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:
                 Categoria       Idade
                Infantil A     5 - 7 anos
                Infantil B     8 - 10 anos
                Juvenil A     11 - 13 anos
                Juvenil B     14 - 17 anos
                Sênior        maiores de 18 anos  */

// switch

int main(){

      int num;

     printf(" Digite 1 para 5 - 7 anos:\n ");
     printf("Digite 2 para 8 - 10 anos:\n ");
     printf("Digite 3 para 11 - 13 anos:\n ");
     printf("Digite 4 para 14 - 17 anos:\n ");
     printf("Digite 5 para maiores de 18 anos:\n ");
     scanf("%d", &num);

     switch (num){
    case 1:
         printf("\n INFANTIL A");
         break;
    case 2:
         printf("\n INFANTIL B");
         break;
    case 3:
         printf("\n JUVENIL A");
         break;
    case 4:
         printf("\n JUVENIL B");
         break;
    case 5:
         printf("\n SENIOR");
         break;
    default:
        printf("\n Opcao invalida!");
        break;

    }


  }



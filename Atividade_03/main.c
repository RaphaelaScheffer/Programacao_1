#include <stdio.h>

/* Depois da libera��o do governo para as mensalidades dos planos de sa�de, as
pessoas come�aram a fazer pesquisas para descobrir um bom plano, n�o muito
caro. Um vendedor de um plano de sa�de apresentou a tabela a seguir. Fa�a um
programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
valor que ela dever� pagar.
                                   Idade               Valor
                               At� 10 anos           R$30,00
                        Acima de 10 at� 29 anos      R$60,00
                        Acima de 29 at� 45 anos      R$120,00
                        Acima de 45 at� 59 anos      R$150,00
                        Acima de 59 at� 65 anos      R$250,00
                           Maior que 65 anos         R$400,00 */



int main(){

      int num;
      char nome[30];

     printf("Digite o nome: ");
     scanf("%s", &nome);
     printf(" Digite 1 para idade ate 10 anos:\n ");
     printf("Digite 2 para 11 - 29 anos:\n ");
     printf("Digite 3 para 30 - 45 anos:\n ");
     printf("Digite 4 para 46 - 59 anos:\n ");
     printf("Digite 5 para 60 - 65 anos:\n ");
     printf("Digite 6 para maior de 65 anos:\n ");
     scanf("%d", &num);

     switch (num){
    case 1:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$30,00\n");
       break;
    case 2:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$60,00\n");
         break;
    case 3:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$120,00\n");
         break;
    case 4:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$150,00\n");
         break;
    case 5:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$250,00\n");
         break;
    case 6:
         printf("\n Nome: %s", nome);
         printf("\n Devera pagar: R$400,00\n");
         break;
    default:
        printf("\n Opcao invalida!");
        break;

    }

  }



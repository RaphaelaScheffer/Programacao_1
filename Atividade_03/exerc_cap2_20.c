#include <stdio.h>

/* O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.
                          Saldo Médio              Percentual
                          de 0 a 500             nenhum crédito
                        de 501 a 1000            30% do valor do saldo médio
                       de 1001 a 3000            40% do valor do saldo médio
                       acima de 3001             50% do valor do saldo médio */



int main(){

      int num, sal, cred, cred2, cred3;


     printf("Digite o saldo: ");
     scanf("%d", &sal);
     printf(" Digite 1 para saldo de 0 - 500:\n ");
     printf("Digite 2 para saldo de 501 - 1000:\n ");
     printf("Digite 3 para saldo de 1001 - 3000:\n ");
     printf("Digite 4 para saldo maior que 3000:\n ");
     scanf("%d", &num);

     cred = sal * 0.3;
     cred2 = sal * 0.4;
     cred3 = sal * 0.5;

     switch (num){
    case 1:
         printf("\n NAO POSSUI CREDITO!");
       break;
    case 2:
         printf("\n Saldo: %d \n Credito: %d", sal, cred);
         break;
    case 3:
         printf("\n Saldo: %d \n Credito: %d", sal, cred2);
         break;
    case 4:
         printf("\n Saldo: %d \n Credito: %d", sal, cred3);
         break;
    default:
        printf("\n Opcao invalida!");
        break;

    }

  }



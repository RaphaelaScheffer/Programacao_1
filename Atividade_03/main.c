#include <stdio.h>

/* A confedera��o brasileira de nata��o ir� promover eliminat�rias para o pr�ximo
mundial. Fa�a um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:
                 Categoria       Idade
                Infantil A     5 - 7 anos
                Infantil B     8 - 10 anos
                Juvenil A     11 - 13 anos
                Juvenil B     14 - 17 anos
                S�nior        maiores de 18 anos  */

// if

int main(){

      int idade;

     printf("Digite a idade do nadador:\n ");
     scanf("%d", &idade);
   if (idade <= 4)
     printf("Idade nao permitida!");
   else {
   if (idade <= 7)
    printf("Infantil A");
   else if (idade <= 10)
    printf("Infantil B");
   else if (idade <= 13)
    printf("Juvenil A");
   else if (idade <= 17)
    printf("Juvenil B");
   else
    printf("Senior");
 }
       return 0;
  }



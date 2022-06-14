#include <stdio.h>

/* Faça um programa em C que permita entrar com o ano de nascimento da pessoa
e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça
de verificar se o ano de nascimento informado é válido. */


int main(){

     int nasc, anoat;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &nasc);
    printf("Digite o ano atual: \n");
    scanf("%d", &anoat);
   if (nasc > 0 && nasc <= anoat) {
      printf("Sua idade: %d",anoat - nasc);
     }
   else
      printf("Data de nascimento invalida");

    return 0;
}

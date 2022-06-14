#include <stdio.h>

// Faça um programa que leia 3 números e imprima o maior deles


int main(){

      int n1, n2, n3;

      printf("Digite o primeiro numero:\n ");
      scanf("%d",&n1);
      printf("Digite o segundo numero:\n ");
      scanf("%d",&n2);
      printf("Digite o terceiro numero:\n ");
      scanf("%d",&n3);

    if (n1 > n2 && n1 > n3) {
      printf("Maior numero: %d", n1);
     }
    else if (n2 > n1 && n2 > n3) {
      printf("Maior numero: %d", n2);
     }
    else {
      printf("Maior numero: %d", n3);
      }

    return 0;
}

#include <stdio.h>

//Fa�a um programa em C que leia um n�mero e informe se ele � divis�vel por 3 e por 7.

int main(){

   int num;
    printf("Digite um numero:\n ");
    scanf("%d", &num);
   if ((num % 3) == 0 && (num % 7) == 0)
     printf("Divisivel por 3 e por 7");
    else
     printf("Nao e divisivel por 3 e por 7");

    return 0;
}

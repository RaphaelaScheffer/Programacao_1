#include <stdio.h>

//Fa�a um programa em C que leia um n�mero e indique se o n�mero est� compreendido entre 20 e 50 ou n�o.

int main(){

    int num;

    printf("Digite o numero: \n ");
    scanf("%d",&num);
   if (num >= 20 && num <= 50)
    printf("Numero esta entre 20 e 50");
   else
    printf("Numero nao esta entre 20 e 50");

    return 0;
}

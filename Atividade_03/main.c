#include <stdio.h>

/*A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios
  estatut�rios. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio
  bruto. Fa�a um programa em linguagem C que permita entrar com o sal�rio bruto
  e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido */

int main(){

    int sal, prest;

     printf("Digite o salario bruto:\n ");
     scanf("%d",&sal);
     printf("Digite o valor da prestacao:\n ");
     scanf("%d",&prest);
   if (prest <= (sal * 0.3))
    printf("Emprestimo pode ser concedido!");
  else
    printf("Emprestimo nao pode ser concedido!");
    return 0;
}

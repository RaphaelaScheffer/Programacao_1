 /*Copie o c�digo pronto e funcional do programa 4 e adicione uma pesquisa por um n�mero no vetor.
   Seu programa deve pedir um n�mero ao usu�rio e, ent�o, pesquis�-lo no vetor.
   Se encontrar, deve imprimir qual � o �ndice que o n�mero desejado est�.
   Caso contr�rio, deve imprimir �n�mero n�o encontrado�. */

#include <stdio.h>

  int main (){

     int i, aux=0;
     float vet[100], num;

      for (i=0; i<100; i++){
          vet[i] = (2*i) + 1;
       }

      for (i=0; i<10; i++){
        printf(" Vetor[%d] : %.2f\n", i, vet[i]);
       }

        printf("Digite o valor que deseja pesquisar:\n");
        scanf("%f", &num);

	 for (i=0; i<100; i++) {
       if (vet[i] == num) {
        printf("Numero encontrado no vetor [%d]\n", i);
        aux = 1;
        break;
        }
    }
        if (aux == 0){
         printf("Numero nao encontrado\n");
        }
         return 0;
       }

 /*Copie o código pronto e funcional do programa 4 e adicione uma pesquisa por um número no vetor.
   Seu programa deve pedir um número ao usuário e, então, pesquisá-lo no vetor.
   Se encontrar, deve imprimir qual é o índice que o número desejado está.
   Caso contrário, deve imprimir “número não encontrado”. */

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

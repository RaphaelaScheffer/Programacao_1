/*Copie o código pronto e funcional do programa 4 e adicione um laço que permita percorrer todo o vetor
 e imprimir na tela os múltiplos de 3 ou de 5.*/

#include <stdio.h>

  int main (){

     int i, aux=0,vet[100], num;


      for (i=0; i<100; i++){
          vet[i] = (2*i) + 1;
       }

      for (i=0; i<10; i++){
        printf(" Vetor[%d] : %d\n", i, vet[i]);
       }

        printf("MULTIPLOS DE 3 OU 5\n");
        for (i=0; i<100; i++){
        if (((vet[i] % 3) == 0) || ((vet[i] % 5) == 0)){
            printf("Vetor[%d] : %d\n", i, vet[i]);
        }}


        printf("Digite o valor que deseja pesquisar:\n");
        scanf("%d", &num);

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

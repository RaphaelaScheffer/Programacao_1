//Crie um vetor de 30 posições e preencha com valores de 1 a 30. Depois, imprima seus valores na tela.

#include <stdio.h>

  int main (){
    
     int i, vet[30];
     
      for (i=0; i<30; i++){
          vet[i] = i + 1;
       }
     
      for (i=0; i<30; i++){
        printf(" Vetor[%d] : %d\n", i, vet[i]);
       }
         return 0; 
       }
     

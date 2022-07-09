//Crie um vetor de 15 posições só com números ímpares.

#include <stdio.h>

  int main (){
    
     int i, vet[15];
     
      for (i=0; i<15; i++){
          vet[i] = 1 + (2*i);
       }
     
      for (i=0; i<15; i++){
        printf(" Vetor[%d] : %d\n", i, vet[i]);
       }
         return 0; 
       }
     

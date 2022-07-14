#include <stdio.h>
#include <stdlib.h>
int main() {
 int vet[4], i;
 
 printf("Digite o numero do vetor:\n");
 for(i=0;i<4;i++){
 scanf("%d", &vet[i]);}
 
 for(i=0;i<4;i++){
 printf("Vetor [%d] : %d\n", i, vet[i]*2);
      }}

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *idade;
    idade= malloc(sizeof(float));
      printf("digite sua idade:\n");
       scanf("%d", idade);
  
     printf("End :%p\n" , idade);
     printf("Valor:%d\n" , *idade);
  }
  

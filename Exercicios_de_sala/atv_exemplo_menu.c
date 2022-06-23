#include <stdio.h>

   int main () {
   
   char opcao;
   
  do{
   printf("Escolha a opcao:\n");
   printf("A) 18\n");
   printf("B) 29\n");
   printf("C) 30\n");
   scanf("%c", &opcao);
   }while(opcao != 'a' && opcao != 'b' && opcao != 'c'); 
    printf("tua opcao: %c\n", opcao);
    }

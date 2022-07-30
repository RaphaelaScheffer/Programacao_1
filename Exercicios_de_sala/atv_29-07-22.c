#include <stdio.h>
#include <stdlib.h>

void teste (int *num){
  printf("E:%p\n",&num);
  printf("F:%p\n", num);
  *num=10;
}
int main (){
  int num=7;

   printf("  %p\n", &num);
   teste(&num);
    printf("%d\n",num);
   
}

#include <stdio.h>
 
  int main (){
  
    int num, flag, i;
     printf("Escreva um numero:\n");
     scanf("%d", &num);
     flag=0;
     for(i=2;i<num-1;i++){
         if(num % i == 0)
          flag = 1;
          }
      if (flag == 0) 
      printf( "%d e primo!\n" , num);
      
      else 
      printf( "%d NAO e primo!\n" , num);
      }

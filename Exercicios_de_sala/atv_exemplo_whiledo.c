#include <stdio.h>
   
     int main () { 
     
      int i;  
      printf("os divisiveis por 3 e pares:\n");
      
      i=2;
     do{
     
      if (i % 3 == 0 && i % 2 == 0)
      printf("%d\n", i);
      i++;
      }while (i<=40);
      }
      

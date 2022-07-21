#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

 int main(){

   int mat[LIN][COL],i, j;
     for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
        mat[i][j] = rand() % 1000;
     }
     }
  
     for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
        printf( "Matriz [%d][%d] = %d\n", i,j,mat[i][j]);
      }
      }
      }
    


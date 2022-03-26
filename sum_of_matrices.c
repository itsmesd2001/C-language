#include<stdio.h>
int main(){
    int mtrA[3][3], mtrB[3][3], sum[3][3];
    int i,j;
     printf("Enter the elements of Matrix A\n"); 
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
             scanf("%d", &mtrA[i][j]);
         }
         
     }
      printf("\nThe matrix of A is:\n"); 
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
              printf("%d\t", mtrA[i][j]);
         }
          printf("\n"); 
     }
     printf("\nEnter the elements of matrix B:\n"); 
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
             scanf("%d", &mtrB[i][j]);
         }
     }
      printf("\nThe matrix B is:\n"); 
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
             printf("%d\t", mtrB[i][j]);
         }
          printf("\n"); 
     }

      printf("\nThe addition matrix of A and B is:\n"); 
      for ( i = 0; i < 3; i++)
      {
          for ( j = 0; i < 3; j++)
          {
               sum[i][j]=mtrA[i][j] + mtrB[i][j];
                printf("%d\t", sum[i][j]);

          }
           
      }
      
    return 0;
}
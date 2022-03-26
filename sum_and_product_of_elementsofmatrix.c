#include<stdio.h>

int main(){
    int i,j,k,l,sum=0,product=1;
    int mtr[3][3];
     printf("Enter the elements for matrix A\n"); 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mtr[i][j]);
        }
        
    }
     printf("The matrix you entered is :\n"); 
     for (  int k = 0; k < 3; k++)
     {
         for (int l = 0; l < 3; l++)
         {
              printf("%d\t", mtr[k][l]); 
         }
          printf("\n"); 
     }
     for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
         {
             sum += mtr[i][j];
             product*=mtr[i][j];
         }
         
     }
      printf("\nThe addition of all the elements of the matrix is: %d", sum); 
      printf("\nThe product of all the elements of the matrix is: %d", product); 
     
    return 0;
}
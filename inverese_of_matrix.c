// To calculate the inverse of 3x3 matrix
#include<stdio.h>
int main(){
    float determinant; 
    int a[3][3];
     printf("Enter the elements of the matrix A row-wise: \n"); 
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             scanf("%d", &a[i][j]);
         }
         
     }
     
      printf("The matrix A is : \n"); 
      for ( int i = 0; i < 3; i++)
      {
           printf("\n"); 
           for (int  j = 0; j < 3; j++)
           {
                printf("%d\t", a[i][j]); 
           }
           
      }
      //Calculating the determinant of the matrix taken from user.
    determinant= (a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])) - (a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])) + (a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));

   
   
     if (determinant!=0)
     {
     printf("\nThe determinant of A is %.2f", determinant); 
     printf("\nThe inverse  matrix of A is:\n"); 
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("%.2f\t",((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]))/ determinant);
             
        }
         printf("\n"); 
    }
         
     }
     else
     
          printf("\nThe matrix is singular, hence not invertible"); 
     
    
    return 0;
}
#include<stdio.h>
int main(){
    int i,x,rows,r;
     printf("Enter the number of rows: \n"); 
     scanf("%d", &rows);
        r=2*rows-1;

     for ( i = 1; i <=rows; i++)
     {
         for ( x = 1; x <= i; x++)
         {
              printf("*  "); 
         }
          printf("\n"); 
     }
     
    return 0;
}
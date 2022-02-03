#include<stdio.h>
int main(){
    int i, x,rows;
     printf("Enter  the number of rows\n"); 
     scanf("%d", &rows);
     for ( i = 1; i <=rows; i++)
     {
          for ( x = 1; x <=i; x++)
          {
               printf("%c", i+64); 
          }
           printf("\n"); 
     }
     
    return 0;
}
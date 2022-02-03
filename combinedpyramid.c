#include<stdio.h>
int main(){
    int rows, i,x, space;
       printf("Enter the number of rows:\n"); 
       scanf("%d", &rows);


       for ( i = 1; i <=rows; i++)
       {
           for ( space = 1; space <=rows-i; space++)
           {
                printf("  "); 
           }
           
           for ( x = 0; x!=2*i-1; x++)
           {
                printf("* "); 
           }
            printf("\n"); 
       }


       for ( i = rows; i ; i--)
       {
           for ( space = 1; space <=rows-i; space++)
           {
                printf("  "); 
           }
           
           for ( x = 0; x!=2*i-1; x++)
           {
                printf("* "); 
           }
            printf("\n"); 
       }
       
    return 0;
}
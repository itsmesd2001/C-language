#include<stdio.h>
int main(){
    int i,j,x;
     printf("Enter the number of rows:\n"); 
     scanf("%d", &x);

       for ( i = 1; i <=x; i++)
       {
           for ( j = 1;  j<=i; j++)
           {
                printf("* ");

           }
             printf("\n"); 
       }
       
       for ( i = x; i; i--)
       {
           for ( j = 1;  j<i; j++)
           {
                printf("* ");

           }
             printf("\n"); 
       }
    return 0;
}
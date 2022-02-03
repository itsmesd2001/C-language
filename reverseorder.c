#include<stdio.h>
int main(){
    int n,i,x;
       printf("Enter the value for n:\n"); 
       scanf("%d", &n);

       for ( i = n; i; i--)
       {
            printf("%d\t", i); 
       }
       
    return 0;
}
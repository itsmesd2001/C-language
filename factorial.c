#include<stdio.h>
int main(){
    int n, result;
     printf("Enter the integer value:\n"); 
     scanf("%d", &n);
     for (int  i = 1; i <= n; i++)
     {
         result=result*i;
     }
      printf("\nThe value of %d! is %d", n,result); 
    return 0;
}
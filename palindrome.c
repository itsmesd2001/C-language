#include<stdio.h>
int main(){
    int n, integer,reverse=0, remainder;
     printf("Enter the integer: \n"); 
     scanf("%d", &n);
     integer=n;
    while (  n != 0)
    {
        remainder= n - (n/10)*10;
        reverse=reverse*10 + remainder;
        n=n/10;

    }
     if (integer==reverse)
     {
          printf("The number is a palindrome."); 
     }

     else
     {
             printf("The number is NOT a palindrome."); 
     }
     
     
    return 0;
}
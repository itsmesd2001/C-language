#include<stdio.h>
int fibonacci();
int fibonacci(int n){
    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
    
}
int main(){
    int n;
     printf("Enter the value for n\n"); 
     scanf("%d", &n);
    //   printf("The element is the fibonacci series is %d",  fibonacci(n) ); 
    for (int i = 1; i <= n; i++)
    {
         printf("%d, ", fibonacci(i)); 
    }
    
    return 0;
}
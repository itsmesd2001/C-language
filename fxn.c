#include<stdio.h>
int factorial();
int factorial(int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return a*(factorial(a-1));
    }
    
}

int main(){
    int n;
        n=(float)n;
     printf("Entert the value of n\n"); 
     scanf("%f", &n);
    int result=factorial(n);
     printf("%f", result); 
    return 0;
}
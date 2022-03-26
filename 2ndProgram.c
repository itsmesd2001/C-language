#include<stdio.h>
int sum(int a,int b);
int product(int a,int b);
int main(){
    int int1,int2;
     printf("Enter the first integer:\n"); 
     scanf("%d", &int1);
     printf("Enter the second integer:\n"); 
     scanf("%d", &int2);
    
     printf("\nThe sum of these integers is %d and the product is %d", sum( int1,  int2),product(int1,int2));
    return 0;
}
int sum(int a,int b){
    int result=a+b;
    return result;
}
int product(int a,int b){
    int result=a*b;
    return result;
}
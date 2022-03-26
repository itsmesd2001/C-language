#include<stdio.h>
float average(float a, float b);
float average(float a, float b){
 float result= (a+b)/2;
   return result;
}
int main(){
    int num1;
    int num2;
     printf("Enter the values:\n"); 
     scanf("%d", &num1);
     scanf("%d", &num2);
      printf("\nTeh avg is %.2f ", average(num1,num2) ); 
    return 0;
}
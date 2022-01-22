#include<stdio.h>

int main(){
    float celsius;
    printf("Enter the Temperature in celsius: ");
    scanf("%f", &celsius);
    printf("The temperature in Fahrenhiet is %f\n", (celsius * 9/5)+ 32);

    return 0;

}
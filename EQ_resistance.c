#include<stdio.h>
int main(){
    float R1,R2,R3;
    printf("Enter the value of R1(ohms): ");
    scanf("%f", &R1);
    printf("Enter the value of R2(ohms): ");
    scanf("%f", &R2);
    printf("Enter the value of R3(ohms): ");
    scanf("%f", &R3);
    printf("The equivalent resistance is %f ohms", R1 + R2+ R3);
    return 0;
}
#include<stdio.h>
int main(){
    float  principal, rate, time;
    printf("Enter the value of principal: \n");
      scanf("%f", &principal);
    printf("Enter the value of rate of interest: \n");
      scanf("%f", &rate);
    printf("Enter the value of time period(Yrs): \n");
      scanf("%f", &time);


    printf("The value of the Simple Interest is %f", (rate*principal*time)/100);

    return 0;

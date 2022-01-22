#include<stdio.h>
int main(){
    
    float pi=3.14;
    int radius,height;
    printf("Enter the radius of cylinder: ");
    scanf("%d", &radius);
    printf("Enter the height of cylinder: ");
    scanf("%d", &height);
    printf("The Volume of the cylider is %f", pi*radius*radius*height);

    return 0;
}
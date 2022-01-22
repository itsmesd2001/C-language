#include<stdio.h>
int main(){
    int age;
    printf("Enter you age ");
    scanf("%d", &age);

    if(age>= 18 && age<=90){
        printf("You CAN drive.");
    }
    else if(age<18){
        printf("You are below 18, so you CANNOT drive.");
    }
    else if (age>90)

    {
      printf("Sorry, you are above 90, you cannot drive.");
    }
    

    return 0;
}
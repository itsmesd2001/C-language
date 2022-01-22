#include<stdio.h>
int main(){
    int rating;
    printf("Please rate us(1-5) ");
    scanf("%d", &rating);

    if (rating==1)
    {
        printf("You have rated us 1 star. Thank you. ");
    }
    else if (rating==2)
    {
        printf("You have rated us 2 star. Thank you. ");
    }
    else if (rating==3)
    {
        printf("You have rated us 3 star. Thank you. ");
    }
    else if (rating==4)
    {
        printf("You have rated us 4 star. Thank you. ");
    }
    else if (rating==5)
    {
        printf("You have rated us 5 star. Thank you. ");
    }
    else
    {
        printf("Sorry, you have entered an invalid rating. Please enter rating between 1 and 5. ");
    }
    

    
    
    return 0;
}
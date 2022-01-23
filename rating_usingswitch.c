#include<stdio.h>
int main(){
    int rating;
    printf("Enter the rating \n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("You have rated us 1 Star. Thank You.");
        break;
    case 2:
        printf("You have rated us 2 Star. Thank You.");
        break;
     case 3:
        printf("You have rated us 3 Star. Thank You.");
        break;
    case 4:
        printf("You have rated us 4 Star. Thank You.");
        break;
    case 5:
        printf("You have rated us 5 Star. Thank You.");
        break;
    case 0:
        printf("You have rated us 0 Star. Thank You.");
        break;
    
    
    default:
        printf("pagal hai kya be ..!!");
        break;
    }
    return 0;
}
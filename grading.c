#include<stdio.h>
int main(){
    int num;
    printf("Enter your marks ");
    scanf("%d", &num);
    if (num>=91 && num<=100)
    {
        printf("Congratulations!! You have secured A+");
    
    }
     else if (num>=81 && num<=90)
     {
         printf("Congratulations!! You have secured A");
     }

     else if (num>=71 && num<=80)
     {
         printf("Congratulations!! You have secured B+");
     }

     else if (num>=61 && num<=70)
     {
         printf("Congratulations!! You have secured B");
     }

     else if (num>=51 && num<=60)
     {
         printf(" You have secured C");
     }

     
     
    


    return 0;
}
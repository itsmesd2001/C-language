#include<stdio.h>
int main(){
    int num;

    int prime=1;
     printf("Enter the number\n"); 
     scanf("%d", &num);
        for ( int i = 2,result; i < num; i++)
        {
            result=num%i;
            if (result==0)
            {
                prime=0;

                break;
            }
            
            else
            {
                continue;

            }
            

        }
        if (prime==0)
        {
             printf("The number is not prime number\n"); 
        }
        else
        {
             printf("The number is prime number\n"); 
        }
        
    return 0;
}
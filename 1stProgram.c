#include<stdio.h>
void prime(int a);
void prime(int a){
    int prime=1;
    for ( int i = 2,result; i < a; i++)
        {
            result=a%i;
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

}
int main(){
    int num;
     printf("Enter the number\n"); 
     scanf("%d", &num);
     prime(num);
        
    return 0;
}
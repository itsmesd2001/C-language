#include<stdio.h>
int main(){
    int choice, n,i,x=0,b;
    double  a, r=1;
      i=0;
     printf("Enter 1 to print natural numbers upto n\n"); 
     printf("Enter 2 to print  sum of natural numbers upto n\n"); 
     printf("Enter 3 to calculate n factorial\n"); 
    //  printf("Enter 4 to print natural numbers upto n\n"); 
    //  printf("Enter 5 to print natural numbers upto n\n"); 
        scanf("%d", &choice);
        printf("Enter the value of n\n"); 
        scanf("%d", &n);
        switch (choice)
        {
        case 1:
            for ( i = 0; i < n; i++)
            {
                 printf("%d\n", i+1); 
                
            }
            
            break;
        case 2: 
            for ( i = 0; i <= n; i++)
            {
                x=x+i;
            }
             printf("The sum of first %d natural numbers is %d", n, x); 
             break;
        case 3:
            for ( i = 0; i <n; i++)
            {
                r=r*(i+1);
            }
             printf(" %d! is %f", n,r); 
             break;
        
        default:
         printf("Invalid entry...!!!"); 
            break;
        }
         printf("\nThanks for using my program."); 

    return 0;
}
#include<stdio.h>
void pattern();
void pattern(int n){
    int k=0,i;
    for (i=1; i<=n; i++)
    {
    
    for ( k = 0; k != 2*i-1 ; k++)
    {
         printf("* "); 
    }
     printf("\n"); 
    }
    
}
void pattern();
int main(){
    pattern(5);
    return 0;
}
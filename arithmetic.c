#include<stdio.h>

    int product(int a, int b);
    int product(int a, int b){
        int x=a;
        for (int  i = 1; i < b; i++)
        {
          a+=x;
        
        }
        int result=a;
        return result;
    }
    int main(){

        int i,j;
         printf("Enter the first number: "); 
         scanf("%d", &i);
         printf("Enter the first number: "); 
         scanf("%d", &j);
          printf("Teh rooshf is %d", product(i,j)); 
    return 0;
}
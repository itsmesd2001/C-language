#include<stdio.h>

int power(int base, int exp);
int power(int base, int exp){
    if (exp==1)
    {
        return 3;
    }
    else
    {
        return base* power (base,(exp-1));
    }
    
}
int main(){
     printf("%d", power(3,3)); 
    return 0;
}
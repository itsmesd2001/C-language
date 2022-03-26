#include<stdio.h>
int power(int base, int a);
int power(int base, int a){
    if (a==1)
    
        return 3;

    
    else
    
        return base*power( base,  a-1);

    
    
}

int main(){
   int base=3, a=7;
   int result=power(3,7);
    printf("The value for 3^7 is %d", result); 
    
    return 0;
}

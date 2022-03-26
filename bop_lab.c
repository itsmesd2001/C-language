#include<stdio.h>
int main(){
    int number,result=0;
    for (int  i = 0; i >= 0; i++)
    {
        scanf("%d", &number);
        result+=number;
        if (number!=0)
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
     printf("SUM =%d", result); 
    return 0;
}
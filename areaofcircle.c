#include<stdio.h>
int main(){
    int i=1,j,x=0;
    while (i<=3)
    {
        for ( j = 0; j < i; ++j)
        {
            if(j%3==0)
            continue;
            x+=(i+j/2-2);

        }
        i++;
        printf("%d",x);

        
    }
    printf("\nx=%d", ++x);
    
    
    return 0;
}
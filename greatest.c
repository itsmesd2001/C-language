#include<stdio.h>
int main(){
    int a,b,c,d;
       printf("Enter the number a ");
       scanf("%d", &a);
       printf("Enter the number b ");
       scanf("%d", &b);
       printf("Enter the number c ");
       scanf("%d", &c);
       printf("Enter the number d ");
       scanf("%d", &d);


        if (a>b)
        {
        
            if (a>c)
            {
                if(a>d)
                printf("The greatest number is %d ", a);
            }
            

        }
          if (b>a)
        {
        
            if (b>c)
            {
                if(b>d)
                printf("The greatest number is %d ", b);
            }
            

        }
        if (c>b)
        {
        
            if (c>a)
            {
                if(c>d)
                printf("The greatest number is %d ", c);
            }
            

        }
        
        else
        {
            printf(" The greatest number is %d", d);
        }
        

    return 0;
}
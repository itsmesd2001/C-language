#include<stdio.h>
// #include<conio.h>
int main()
{


int i=1,x=0;
 do
    {

 
     if(1%3==0){
    x=x+2;

    printf("%d", x);
    }
    i= 7*i/3;
    }



       while(i<20);
        printf("\nx=%d",x--);

     
      return 0; }
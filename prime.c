#include<stdio.h>


  char mychar();
int main(){
    char a;
     printf("Enter the character value:\n"); 
     a=mychar();
      printf("the value is %c", a); 

    return 0;
}


    char mychar(){
         char b;
         scanf("%c", &b);
         
         return b;
         
   }
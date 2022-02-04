#include<stdio.h>
  void mychar();
int main(){
    char a;
     printf("Enter the character value:\n"); 
     a=mychar();
      printf("the value is %c", a); 
    return 0;
}


   void mychar(){
    scanf("%c");
   }
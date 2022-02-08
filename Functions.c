#include<stdio.h>
int mychar();
int mychar(){
  char a;
  scanf("%c", &a);

  return a;

}
int main(){
  char b,j,k;
     printf("Enter the value for a:\n"); 
     b=mychar();
     j=getchar();
      printf("The value is %c", b); 
  return 0;

}
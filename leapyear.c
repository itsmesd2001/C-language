#include<stdio.h>
int main(){
    int year, result;
      printf("Enter the year: ");
      scanf("%d", &year);
      result= year%4; 

      if (result==0)
      {
           printf("%d is a leap year.", year); 
      }

      else
      {
           printf("%d is NOT a leap year.", year); 
      }
      
      
    return 0;
}
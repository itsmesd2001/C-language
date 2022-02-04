
#include<stdio.h>
  
   void product();
   void product(){
         int a,b,c;

        printf("Enter any 2 integer values:\n"); 
        scanf("%d", &a);
        scanf("%d", &b);
        c=a*b;
          printf("The answer is %d", c); 
   }
int main(){

      char choice;
      
      for ( int i = 1; i >0; i++)
      {
          product();
          
           printf("\nWant to try another calculation (Y/N) "); 
             scanf("%c", &choice);

           if (choice=='Y' || choice=='y')
           {
               continue;
           }
           else
           {
               break;
           }
           
      }
      

    return 0;
}
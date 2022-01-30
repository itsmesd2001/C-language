#include<stdio.h>
int main(){
    int choice, num1, num2, num3, result;
     printf("Press 1 for performing addition \n"); 
     printf("Press 2 for performing subtraction \n"); 
     printf("Press 3 for performing multiplication \n"); 
     printf("Press 4 for performing division \n"); 
     printf("Press 5 for performing modulus \n"); 
     
     scanf("%d", &choice);



     switch (choice)
     {
     case 1: 
          printf("Enter the first number:"); 
          scanf("%d", &num1);
          printf("Enter the second number:"); 
          scanf("%d", &num2);

            result=num1+num2;


           printf("The addition of these two numbers is %d", result ); 

            break;

     case 2: 
          printf("Enter the first number:"); 
          scanf("%d", &num1);

          printf("Enter the second number:"); 
          scanf("%d", &num2);

            result=num1-num2;


           printf("The subtraction of these two numbers is %d", result ); 
           
            break;

     case 3: 
          printf("Enter the first number:"); 
          scanf("%d", &num1);

          printf("Enter the second number:"); 
          scanf("%d", &num2);

            result=num1*num2;


           printf("The multiplication of these two numbers is %d", result ); 
           
            break; 

    case 4: 
          printf("Enter the first number:"); 
          scanf("%d", &num1);

          printf("Enter the second number:"); 
          scanf("%d", &num2);

            result=num1/num2;


           printf("The addition of these two numbers is %d", result ); 
           
            break; 

    case 5: 

          printf("Enter the first number:"); 
          scanf("%d", &num1);

          printf("Enter the second number:"); 
          scanf("%d", &num2);

            result=num1%num2;


           printf("The remainder of the calculation is %d", result ); 
           
            break;    

     default:
             printf("Invalid input..!!\n"); 
         break;
     }

      printf("\nThanks for using my program ."); 
    return 0;
}
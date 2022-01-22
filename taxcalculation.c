#include<stdio.h>
int main(){
    float income, tax=0;
    printf("Enter your income \n");
    scanf("%f", &income);


        //        Tax Slabs 
        //  0-250000       ==> 0%
        //  250000-500000  ==> 5%
        //  500000-1000000 ==> 10%
        //   >1000000      ==> 30%

    if (income>250000 && income<500000)
    {
        tax =+ 0.05*(income - 250000);
        printf("You have to pay %f Rs as income tax. ", tax);
    }
     else if (income>500000 && income<1000000)
     {
        tax += 12500 + 0.10*(income-500000);
        printf("You have  to pay %f Rs as income tax. ", tax);

     }

      else if (income>1000000)
     {
        tax= tax + 12500 + 50000 +0.30*(income-1000000);
        printf("You have  to pay %f Rs as income tax. ", tax);
        
     }


      else
      {
          printf("You are under non taxable income category, so you have to pay 0 Rs as income tax.");
      }
      
     
    

    return 0;
}
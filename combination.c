#include<stdio.h>
int main(){
    int number, answer, enter, i;
    printf("Press 1 to calculate Equivalent Resistance in for Series combination.\n");
    printf("Press 2 to calculate Equivalent Resistance in for Parallel combination.\n");
    scanf("%d", &enter);
    printf("Enter the number of resitances: ");
    scanf("%d\n", number);
      if (enter==1)
      {
          for ( i = 0; i < number; i++)
          {
             printf("Enter the value of R%d", i+1); 
             scanf("%d", );
             

          }
          

      }
      
    return 0;
}
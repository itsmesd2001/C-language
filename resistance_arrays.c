#include<stdio.h>
int main(){
    int n; char choice;
      printf("Press S to calculate resistances in series.\n"); 
      printf("Press P to calculate resistances in Parallel.\n"); 
      choice=getchar();

     printf("Enter the number of resistances:\n"); 
     scanf("%d", &n);
    float resistance[n], result;

    if(choice=='S' || choice=='s'){
         result=0;
  
     for ( int i = 0; i < n; i++ )
     {
          printf("Enter the value of R%d \n", i+1); 
          scanf("%f", &resistance[i]);
          result+=resistance[i];

     }
      printf("The equivalent resistance is %f", result); 
    }

    else
    {
        result=0;
    for ( int i = 0; i < n; i++)
     {
          printf("Enter the value of R%d \n", i+1); 
          scanf("%f", &resistance[i]);
          result += 1/resistance[i];


     }
      printf("The equivalent resistance is %f", 1/result);    
     }
    
    return 0;
}
#include<stdio.h>
int main(){
    int r1,r2,r3;
    int enter; float ans;
    printf("Press 1 to calculate Equivalent Resistance in for Series combination.\n");
    printf("Press 2 to calculate Equivalent Resistance in for Parallel combination.\n");
    scanf("%d", &enter);
    if (enter==1)
    {
        printf("Enter the value of R1 ");
        scanf("%d", &r1);
        printf("Enter the value of R2 ");
        scanf("%d", &r2);
        printf("Enter the value of R3 ");
        scanf("%d", &r3);
        ans= r1+r2+r3;
        printf("The equivalent resistance is %f", ans);

    }
      else
      {
        printf("Enter the value of R1 ");
        scanf("%d", &r1);
        printf("Enter the value of R2 ");
        scanf("%d", &r2);
        printf("Enter the value of R3 ");
        scanf("%d", &r3);
        ans= 1/r1+1/r2+1/r3;
        printf("The equivalent resistance is %f", ans);
      }
      
    
    return 0;
}
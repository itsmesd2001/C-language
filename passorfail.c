#include<stdio.h>
int main(){
    int phy, chem, math;
    printf("Enter the marks of Physics ");
    scanf("%d", &phy);
    printf("Enter the marks of Chemistry ");
    scanf ("%d", &chem);
    printf("Enter the marks of Mathematics ");
    scanf("%d", &math);

    float total = (phy+chem+math)/3;

if ((total<50) || phy<33 || chem<33 || math<33 )
{
    printf("Oops!! your total percentage is %f and you are failed.", total);
}
   else{
    printf("Congratulations..!!! Your total percentage is %f and you are passed. ", total);
}

    return 0;
}
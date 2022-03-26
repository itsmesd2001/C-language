#include<stdio.h>
int main(){
    int arr[5]={3,4,5,5,64};
    float sum=0, average;
    for (int i = 0; i < 5; i++)
    {
        sum=sum + arr[i];

    }
    average=sum/5;
     printf("The average is %.2f", average); 
    return 0;
}
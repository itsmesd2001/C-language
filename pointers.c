#include<stdio.h>

void myfun (int a,int b, int *sum, float *avg);
void myfun (int a,int b, int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
    

}
int main(){
        int a=6,b=7;

    int sum; float avg;
    myfun(a,b,&sum,&avg);
     printf("The sum is %d and the average is %f", sum, avg); 
       

  
    
    return 0;
}
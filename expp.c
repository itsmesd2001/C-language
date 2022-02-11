#include<stdio.h>

    void function(int a, int b,  float *j, float  *u);
    void function(int a, int b, float  *j,float  *u){
            *j= a+b;
            *u= *j/2;

    }

    int main(){

        int a=5,b=6;
        float sum, avg;
        function(a,b,&sum,&avg);
         printf("%f \t %f", sum, avg); 
        
    return 0;
}
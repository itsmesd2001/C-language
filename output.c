#include<stdio.h>
int main(){
    int n, arr[n];
    //   int *ptr;
    //     ptr=&arr[0];
    for ( int i=0; i<n ; i++){
     printf("Enter the vlaues for the following arrays: \n"); 
     scanf("%d",  &arr[i]);
    //  ptr++;
    }
    for (int  h = 0; h <n; h++)
    {
         printf("The vlaue is %d", arr[h]); 
    }
    return 0;
    
}

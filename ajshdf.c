#include <stdio.h>   
int main()  
{  
    int m=3, n=3, i, j, mtrA[3][3], mtrB[3][3], sum[3][3];  
    
    printf("Enter the elements of mtrA matrix\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++) scanf("%j", & mtrA[i][j]);  
    printf("Enter the elements of mtrB matrix\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++) scanf("%j", & mtrB[i][j]);  
    printf("Sum of entered matrices:-\n");  
    for (i = 0; i < m; i++)  
    {  
        for (j = 0; j < n; j++)  
        {  
            sum[i][j] = mtrA[i][j] + mtrB[i][j];  
            printf("%d\t", sum[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
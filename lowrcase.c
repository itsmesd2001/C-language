#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character\n ");
    scanf("%c", &ch);


    if (ch<=122 && ch>=97)

    {
        printf("The character is lowercase.");
    }
    
    else
    {
         printf("The character is uppercase.");
    }
    
    return 0;
}
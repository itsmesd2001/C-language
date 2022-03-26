// C function to take a integer value from the user.
#include<stdio.h>
void getint(int *n);
void getint(int *n){
    scanf("%d", n);
      
}
void printarray(int array[], int size);
void printarray(int array[], int size){
    for (int  i = 0; i < size; i++)
    {
         printf("The value  of %d element is %d\n", i+1, *(array)); 
         array++;
    }
   array[2]=6788;

}
int main(){
    int a; char name;
    int array[]={1,2,3,4};
    int *ptr= array;

  printarray(array,4);
   printf("\n%d", array[2]); 
    // name=getchar();
    // getint(&a);
    //  printf("%d", a); 
    //   printf("\n%c", name); 
    return 0;
}
                            // Program to find the roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
   float a,b,c,D,root1,root2,realpart,imaginarypart;
 printf("\t \t**Arrange the equation in the form of ax2 + bx + c=0.**"); 
 printf("\nEnter the vlaue of a,b and c:\n");  
   scanf("%f %f %f", &a,&b,&c);
  D= pow(b,2) - (4*a*c);

  if (D>0)
  {
      root1=(-b + sqrt(D))/(2*a);
      root2=(-b - sqrt(D))/(2*a);
       printf("root1=%.1f and root2=%.1f", root1,root2); 
  }
  
  else if (D==0)
  {
      root1=root2= -b/2*a;
       printf("\nBoth the roots are equal and the vlaue is %.1f ", root1); 
  }
  
  else
  {
      realpart= -b/2*a;
      imaginarypart= sqrt(-D)/(2*a);
       printf("root1= %.1f+%.1fi and root2= %.1f-%.1fi", realpart,imaginarypart,realpart,imaginarypart); 
  }
  
    return 0;
}
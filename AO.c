#include <stdio.h>
int main()
{
int a,b,c,d;
printf("Enter a value: ");
scanf("%d",&a);
printf("Enter b value: ");
scanf("%d",&b);
c = a + b;
d = (float)a/(float)b;
printf("\nSum of two numbers is %d:",c);
printf("\nMultiplication of two numbers is %d:",a*b);
printf("\nDevision of two numbers is %f:",d);
printf("\nSubtraction of two numbers is %d:",a-b);
printf("\nModulus of two numbers is %f:",a%b);
return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c;
float s,Area;
printf("Enter a value: ");
scanf("%f",&a);
printf("Enter b value: ");
scanf("%f",&b);
printf("Enter c value: ");
scanf("%f",&c);
s = (a+b+c)/2;
printf("Sum of the three sides is: %f",s);
Area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of the triangle is: %f",Area);
return 0;
}

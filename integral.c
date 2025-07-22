#include <stdio.h>
int main()
{
float num;
int integral,rightint;
printf("Enter a number: ");
scanf("%f",&num);
integral = (int)num;
rightint = integral % 10;
printf("The right most digits of integral parts of the number is: %d",rightint);
return 0;
}

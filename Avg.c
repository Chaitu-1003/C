#include <stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("Enter a,b,c,sum values:");
scanf("%d%d%d",&a,&b,&c);
sum = a+b+c;
printf("\nThe sum of a,b,c is %d",sum);
avg = (float)sum/3;
printf("\nThe average of three numbers is %f",avg);
return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
double P,t,r,CI;
int n;
printf("Enter principle amount: ");
scanf("%lf",&P);
printf("Enter time: ");
scanf("%lf",&t);
printf("Enter n value: ");
scanf("%d",&n);
printf("Enter rate of interest: ");
scanf("%lf",&r);
CI = P*pow((1+(r/n)), n*t);
printf("Compound Interest is: %.2lf",CI);
return 0;
}

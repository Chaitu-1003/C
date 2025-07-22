#include <stdio.h>
int main()
{
int f = 2;
int l = 200;
int count = (l-f)/2 + 1;
int sum = count*(f+l)/2;
printf("Count of even num fron 1 to 200 is: %d",count);
printf("Sum of even numbers from 1 to 200 is: %d",sum);
return 0;
}

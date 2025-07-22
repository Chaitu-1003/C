#include <stdio.h>
int main()
{
float speed,time;
printf("Enter the speed of the object: ");
scanf("%f",&speed);
printf("Enter the time taken by the object: ");
scanf("%f",&time);
float dist;
dist = speed*time;
printf("Distance travelled by the object is: %f",dist);
return 0;
}

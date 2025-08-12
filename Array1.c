#include <stdio.h>
int main()
{
    int age[5],i;
    printf("Enter values: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&age[i]);
    }
    printf("Array elements are: ");
    for (i=0;i<5;i++)
    {
        printf("%d",age[i]);
    }
    return 0;
}

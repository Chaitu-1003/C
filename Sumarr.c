#include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter n value: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    printf("Sum of the elements of the array is: %d",sum);
    return 0;
}

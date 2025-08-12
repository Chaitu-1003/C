#include <stdio.h>
int main()
{
    int n,target,i,count=0;
    printf("Enter n value: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter target element: ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            printf("index: %d",i);
            count++;
        }
    }
    printf("\n The count of the target element is: %d",count);
    return 0;
}

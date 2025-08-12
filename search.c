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
            printf("\n The target element is present in an array at %d index",i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("\n The target not found or search unsuccesful");
    }
    else {
        printf("\n Search succesful");
    }
    return 0;
}

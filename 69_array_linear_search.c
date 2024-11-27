#include <stdio.h>
int main()
{
    printf("Enter number of elements\n");
    int n;
    scanf("%d",&n);
    printf("Enter %d elements one by one\n",n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Given array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the element you want to search\n");
    int x;
    scanf("%d",&x);
    int index=n;
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            index=i;
        }
    }
    if(index==n)
    {
        printf("%d is not present in the given array\n",x);
    }
    else
    {
        printf("%d is found at index : %d\n",x,index);
    }
    return 0;
}
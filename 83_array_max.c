#include <stdio.h>
int max(int a[],int n);
int main()
{
    printf("Enter the length of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements one by one\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maximum = max(arr , n);
    printf("The maximum is %d\n",maximum);
}
int max(int a[],int n)
{
    int maximum=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}
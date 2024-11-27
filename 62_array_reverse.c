#include <stdio.h>
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    printf("Enter the number of elements you want to input\n");
    int n;
    scanf("%d",&n);
    printf("Enter %d elements one by one\n",n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Given array:\n");
    display(arr,n);
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Sorted array:\n");
    display(arr,n);
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Enter number of elements\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements one by one\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int rev_arr[n];
    for(int i=0;i<n;i++)
    {
        rev_arr[n-1-i] = *(ptr+i);
    }
    printf("OUTPUT\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",rev_arr[i]);
    }
    printf("\n");
}
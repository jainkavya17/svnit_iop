#include <stdio.h>
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
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        { 
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    printf("The max is : %d\n",arr[n-1]);
    printf("The second max is : %d\n",arr[n-2]);
    return 0;
}
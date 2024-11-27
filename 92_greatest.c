#include <stdio.h>
int main()
{
    printf("Enter number of numbers you want to input\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers one by one\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int greatest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i)>greatest)
        {
            greatest = *(ptr+i);
        }
    }
    printf("The greatest number is = %d\n",greatest);
}
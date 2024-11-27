#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the 10 integers one by one");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The given array:\n");
    int p=0;
    int n=0;
    int z=0;
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    printf("\n");
    printf("The number of positive entries : %d\n",p);
    printf("The number of negative entries : %d\n",n);
    printf("The number of zero(s) as entry :%d\n",z);
    return 0;
}
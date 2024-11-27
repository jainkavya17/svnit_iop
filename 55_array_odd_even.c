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
    int o=0;
    int e=0;
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%2 != 0)
        {
            o++;
        }
        else 
        {
            e++;
        }
    }
    printf("\n");
    printf("The number of odd entries : %d\n",o);
    printf("The number of even entries : %d\n",e);
    return 0;
}
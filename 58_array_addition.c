#include <stdio.h>
int main()
{
    int a1[10];
    int a2[10];
    printf("Enter the 10 integers of array 1 one by one\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the 10 integers of array 2 one by one\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("OUTPUT\n");
    printf("Array 1:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");
    printf("Array 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\n");
    int a3[10];
    printf("Summed array:\n");
    for(int i=0;i<10;i++)
    {
        a3[i]=a1[i]+a2[i];
        printf("%d ",a3[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
void display(int a[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the 3 elements of row number %d",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given array :\n");
    display(a);
    for(int i=0;i<3;i++)
    {
        int s=0;
        printf("Sum of row %d :",i+1);
        for(int j=0;j<3;j++)
        {
            s += a[i][j];
        }
        printf("%d\n",s);
    }
    return 0;
}
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
    printf("Enter the elements of 3x3 matrix row wise");
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix:\n");
    display(a);
    int max=a[0][0];
    int min=max;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
}
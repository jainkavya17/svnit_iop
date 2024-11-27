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
        printf("Enter the 3 elements of Matrix 1 row  %d",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the 3 elements of Matrix 2 row  %d",i+1);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 1 :\n");
    display(a);
    printf("Matrix 2 :\n");
    display(b);
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
    }
    printf("Addition of matrix 1 and 2 :\n");
    display(c);
    return 0;
}
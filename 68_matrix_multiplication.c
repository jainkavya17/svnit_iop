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
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        int f=0;
        while(f<=2)
        {
            int s=0;
            for(int j=0;j<3;j++)
            {
                s += a[i][j] * b[j][f];
            }
            c[i][f]=s;
            f++;
        }
    }
    printf("Matrix A\n");
    display(a);
    printf("Matrix B\n");
    display(b);
    printf("Matrix AB\n");
    display(c);
    return 0;
}
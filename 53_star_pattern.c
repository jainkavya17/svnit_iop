#include <stdio.h>
int main()
{
    printf("Enter number of upper lines\n");
    int n;
    scanf("%d",&n);
    int j=1;
    int i=1;
    while(j<=n)
    {
        for(int k=0;k<n-j;k++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
        i += 2;
        j++;
    }
    j -= 2;
    i -= 4;
    while(j>=1)
    {
        for(int k=0;k<n-j;k++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
        i -= 2;
        j--;
    }
    return 0;
}
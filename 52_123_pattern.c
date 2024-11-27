#include <stdio.h>
int main()
{
    printf("Enter the number of lines you want\n");
    int n;
    scanf("%d",&n);
    int j=1;
    while(j<=n)
    {
        int k=j;
        for(int i=0;i<n-j;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=j;i++)
        {
            printf("%d",i);
        }
        while(k!=1)
        {
            printf("%d",--k);
        }
        printf("\n");
        j++;
    }
    return 0;
}
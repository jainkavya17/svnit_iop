#include <stdio.h>
int main()
{
    printf("Enter the number of lines you want\n");
    int n;
    scanf("%d",&n);
    int ws=0;
    int j=1;
    while(j<=n)
    {
        int k=1;
        ws=n-j;
        for(int i=0;i<ws;i++)
        {
            printf(" ");
        }
        for(int l=0;l<j;l++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        j++;
    }

}
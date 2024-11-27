#include <stdio.h>
int main()
{
    printf("Enter number of lines you want\n");
    int n;
    scanf("%d",&n);
    int pre_s;    
    if(n%2==0)
    {
        pre_s=n;
    }
    else
    {
        pre_s=n-1;
    }
    int j=1;
    while(j<=n)
    {
        for(int i=0;i<pre_s;i++)
        {
           printf(" ");
        }
        for(int i=0;i<j;i++)
        {
            printf("* ");
        }
        printf("\n");
        pre_s--;
        j++;
    }
}
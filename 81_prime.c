#include <stdio.h>
int prime_or_not(int n);
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int r=prime_or_not(n);
    if(r==0)
    {
        printf("NOT PRIME\n");
    }
    else
    {
        printf("PRIME\n");
    }
}
int prime_or_not(int n)
{
    int c=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c--;
            break;
        }
    }
    return c;
}
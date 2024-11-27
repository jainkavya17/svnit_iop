#include <stdio.h>
int even_or_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int r=even_or_odd(n);
    if(r==1)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}
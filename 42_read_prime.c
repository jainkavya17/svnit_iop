#include <stdio.h>
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Number is prime \n");
    }
    else
    {
        printf("Number is composite \n");
    }
    return 0;
}
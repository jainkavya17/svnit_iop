#include <stdio.h>
int main()
{
    int n=19;
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
        printf("Number is not prime \n");
    }
    return 0;
}
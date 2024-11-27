#include <stdio.h>
float factorial(int a);
float NCR(int n, int r);
int main()
{
    int n,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    if(n<0||r<0)
    {
        printf("Input cannot be negative\n");
    }
    else if(n<r)
    {
        printf("Wrong input : r cannot be grater than n\n");
    }
    else
    {
        float result= NCR (n,r);
        printf("NCR=%f\n",result);
    }
}
float factorial(int a)
{
    float f=1;
    for(int i=2;i<=a;i++)
    {
        f *= i;
    }
    return f;
}
float NCR(int n, int r)
{
    float NCR = factorial(n)/(factorial(r)*factorial(n-r));
    return NCR;
}
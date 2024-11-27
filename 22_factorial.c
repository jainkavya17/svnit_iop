#include <stdio.h>
int main()
{
    printf("enter a number\n");
    float n;
    scanf("%f",&n);
    float f=1;
    for(int i=1;i<=n;i++)
    {
        f *= i;
    }
    printf("The factorial is : %f\n",f);
    return 0;
}
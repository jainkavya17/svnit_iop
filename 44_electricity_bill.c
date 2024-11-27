#include <stdio.h>
int main()
{
    printf("enter number of units\n");
    float n;
    scanf("%f",&n);
    float b;
    if(n<0)
    {
        printf("wrong input\n");
    }
    else{
    if(n>=0 && n<=200)
    {
        b = 0.5*n;
    }
    else if(n>200 && n<=400)
    {
        b = 100 + 0.65*(n-200);
    }
    else if(n>400 && n<=600)
    {
        b = 230 + 0.8*(n-400);
    }
    else{
        b = 425 + 1.25*(n-600);
    }
 printf("Bill: %f\n",b);
    }
 return 0;
}
#include <stdio.h>
int main()
{
    printf("Enter principal amount in integer\n");
    int p;
    scanf("%d",&p);
    printf("Enter rate in integer \n");
    int r;
    scanf("%d",&r);
    printf("Enter time in years\n");
    int t;
    scanf("%d",&t);
    int i=(p*r*t)/100;
    printf("The interest is: %d\n",i);
    return 0;
}
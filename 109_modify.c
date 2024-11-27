#include <stdio.h>
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int *ptr=&n;
    *ptr = *ptr + 4;
    printf("The modified value is %d\n",n);
}
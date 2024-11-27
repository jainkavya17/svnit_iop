#include <stdio.h>
#define greater(a,b) a>b?a:b;
int main()
{
    printf("Enter 2 numbers one by one\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int g = greater(a,b);
    printf("The greater amongst the two is %d \n",g);
}
#include <stdio.h>
int main()
{
    printf("enter two numbers");
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("The given numbers are: \n");
    printf("%d\n",a);
    printf("%d\n",b);
    int temp=a;
    a=b;
    b=temp;
    printf("The swapped numbers are: \n");
    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}
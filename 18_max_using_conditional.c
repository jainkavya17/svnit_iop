#include <stdio.h>
int main()
{
    printf("enter 3 numbers one by one");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a>b && a>c ? printf("The greatest is : %d\n ",a) : printf("%d is not greatest\n",a);   
    b>a && b>c ? printf("The greatest is : %d\n ",b) : printf("%d is not greatest\n",b);
    c>b && c>a ? printf("The greatest is : %d\n ",c) : printf("%d is not greatest\n",c);
    return 0;
}
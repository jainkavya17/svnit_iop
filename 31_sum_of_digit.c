#include <stdio.h>
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while(temp>0)
    {
       int d=temp%10;
       sum += d;
       temp=temp/10;
    }
    printf("The sum of digits is : %d\n",sum);
    return 0;
}
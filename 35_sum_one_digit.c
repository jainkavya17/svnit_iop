#include <stdio.h>
int sum(int a)
{
    int t=a;
        a=0;
        while(t>0)
    {
        a += t%10;
        t = t/10;
    }
    return a;
}
int main()
{
    printf("Enter a number");
    int s;
    scanf("%d",&s);
    while(s>=10)
    {
        s=sum(s);
    }
    printf("sum = %d\n",s);
    return 0;
    
}
#include <stdio.h>
int main()
{
    printf("Enter the number of test cases\n");
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    printf("TEST CASE %d\n",i+1);
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int c=0;
    int temp = n;
    while(temp>0)
    {
        int d = temp%10;
        if(d != 0)
        {
            if(n%d==0)
            {
                c++;
            }
        }
        temp=temp/10;
    }
    printf("The number(s) of digits that divide the given number is(are) %d\n",c);
    }
    return 0;
}
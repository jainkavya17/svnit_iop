#include <stdio.h>
int main()
{
    printf("Enter the number one by one\n");
    int n=0;
    int sum=0;
    while(n>=0)
    {
        scanf("%d",&n);
        if(n>0)
        {
        sum += n;
        }
    }
    printf("sum = %d\n",sum);
    return 0;
}
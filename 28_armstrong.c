#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter a number");
    int n;
    scanf("%d",&n);
    int l=0;
    int sum=0;
    int temp=n;
    while(temp>0)
    {
        l++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        int d=temp%10;
        sum += (int)pow(d,l);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("the number is armstrong\n");
    }
    else{
        printf("the number is not armstrong\n");
    }
}
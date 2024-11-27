#include <stdio.h>
void flip(int n , int d);
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    printf("Enter the number of digits to be flipped from last\n");
    int d;
    scanf("%d",&d);
    flip(n,d);
    return 0;
}
void flip(int n , int d)
{
    int temp=n;
    int len=0;
    while(temp>0)
    {
        len++;
        temp=temp/10;
    }
    int arr[len];
    temp=n;
    int count =d;
    int i=0;
    while(temp>0)
    {
        int dig=temp%10;
        temp=temp/10;
        if(count > 0)
        {
            arr[len-1-(count-1)]=dig;
            count--;
        }
        else
        {
            arr[len-1-d-i]=dig;
            i++;
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
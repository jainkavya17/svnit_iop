#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    int l=0;
    while(temp>0)
    {
      temp=temp/10;
      l++;
    }
    temp=n;
    l=l-1;
    while(temp>0)
    {
        int d=temp%10;
        rev = rev + ( d*(int)pow(10,l));
        l--;
        temp=temp/10;
    }
    printf("Reversed number : %d \n",rev);
    if(rev==n)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not palindrome\n");
    }
    return 0;
}
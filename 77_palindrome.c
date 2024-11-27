#include <stdio.h>
#include <math.h>
void palindrome_check(int n)
{
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
}
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    palindrome_check(n);
}
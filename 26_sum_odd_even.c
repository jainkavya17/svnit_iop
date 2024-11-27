#include <stdio.h>
int main()
{
    printf("Enter the value of n\n");
    int n;
    scanf("%d",&n);
    int odd_sum=0;
    int even_sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    printf("Sum of all even numbers : %d\n",even_sum);
    printf("Sum of all odd numbers : %d\n",odd_sum);
    return 0;
}
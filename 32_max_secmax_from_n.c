#include <stdio.h>
int main()
{
    printf("Enter the number of numbers\n");
    int n;
    scanf("%d",&n);
    int max=0;
    int a;
    int sec_max=0;
    int temp=0;
    printf("Enter the numbers one by one\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            temp=max;
            max=a;
        }
        if(temp<a && a<max)
        {
            temp = a;
        }
        if((temp>sec_max && temp<max))
        {
            sec_max=temp;
        }
    }
    printf("The maximum is : %d\n",max);
    printf("The second max is : %d\n",sec_max);
    return 0;
}
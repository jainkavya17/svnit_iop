#include <stdio.h>
int main()
{
    printf("Enter number of numbers\n");
    int n;
    scanf("%d",&n);
    printf("Enter the numbers one by one");
    int max,min,a;
    scanf("%d",&max);
    min=max;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("The maximum is : %d\n",max);  
    printf("The minimum is : %d\n",min);
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Enter the number of elements you want to input\n");
    int n;
    scanf("%d",&n);
    printf("Enter %d elements one by one\n",n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int a= arr[i];
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(a==arr[j])
            {
                f++;
            }
        }
        if(i>0)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(a==arr[j])
                {
                    f=0;
                }
            }
        }
        if(f>0)
        {
        printf("%d : %d time(s)\n",a,f);
        }
    }
    return 0;
}
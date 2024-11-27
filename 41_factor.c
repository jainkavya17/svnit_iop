#include <stdio.h>
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);
    printf("The factors of %d are : ",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i != n)
        {
           printf("%d , ",i);
        }
        if(i==n)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Enter the number upto which square you want the series\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d , ",i*i);
    }
    return 0;
}
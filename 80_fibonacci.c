#include <stdio.h>
void fibonacci(int n);
int main()
{
    printf("Enter the number of terms you want\n");
    int n;
    scanf("%d",&n);
    n=n-2;
    fibonacci(n);
}
void fibonacci(int n)
{
    int a=0;
    int b=1;
    printf("0 1 ");
    for(int i=0;i<n;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}
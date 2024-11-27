#include <stdio.h>
int main()
{
    printf("Enter the number of test cases\n");
    int test_case;
    scanf("%d",&test_case);
    int num[test_case];
    printf("Enter %d numbers\n",test_case);
    for(int i=0;i<test_case;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<test_case;i++)
    {
        int n=num[i];
        int a=0;
        int b=1;
        int c=a+b;
        while(c<n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==n)
        {
            printf("IsFibo\n");
        }
        else
        {
            printf("IsNotFibo\n");
        }
    }
}
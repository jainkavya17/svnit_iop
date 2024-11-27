#include <stdio.h>
int main()
{
    printf("enter the number\n");
    int n;
    scanf("%d",&n);
    printf("enter the power\n");
    int p;
    scanf("%d",&p);
    int product=1;
    for(int i=0;i<p;i++)
    {
        product =product * n;
    }
    printf("the answer is : %d \n",product);
 return 0;
}
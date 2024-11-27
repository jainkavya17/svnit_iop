#include <stdio.h>
int main()
{
    printf("enter the number\n");
    int n;
    scanf("%d",&n);
   /* for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
       
    }
    int a=1;
    while(a<11)
    {
        printf("%d X %d = %d\n",n,a,n*a);
        a++;
    }
    */
    int a=1;
    do
    {
        printf("%d X %d = %d\n",n,a,n*a);
        a++;
    }
    while(a<11);
    
    return 0;

}
#include <stdio.h>
int main ()
{
    printf("Enter the number of terms \n");
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("0 , 1 ");
    n=n-2;
    for(int i=0 ; i<n;i++)
    {
      c=a+b;
      printf(" , %d",c);
      a=b;
      b=c;
    }
    return 0;
}
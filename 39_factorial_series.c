#include <stdio.h>

int factorial(int n)
{
   int f=1;
   for(int i=1;i<=n;i++)
   {
     f *= i;
   }
   return f;
}
int main()
{
    printf("Enter the number of terms you want in the series\n");
    int m;
    scanf("%d",&m);
    float s=0;
    for(int i=1;i<=m;i++)
    {
        if(i<m)
        {
        printf("%d|%d! + ",i,i);
        }
        else
        {
        printf("%d|%d! = ",i,i);
        }
        float f = (float) factorial(i);
        s += i/f;
    }
    printf("%f\n",s);
    return 0;
}

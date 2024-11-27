#include <stdio.h>
int main()
{
    printf("Enter the number of lines you want\n");
    int n;
    scanf("%d",&n);
    int j=1;
    char c='A';
    while(j<=n)
    {
       for(int i=0;i<j;i++)
       {
        printf("%c",c);
       }
       printf("\n");
       c++;
       j++;
    }
}
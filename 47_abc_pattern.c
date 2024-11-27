#include <stdio.h>
int main()
{
    
    printf("Enter the number of lines you want\n");
    int n;
    scanf("%d",&n);
    int j=1;
    while(j<=n)
    {
        char c='A';
        for(int i=0;i<j;i++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
        j++;
    }
    return 0;
}
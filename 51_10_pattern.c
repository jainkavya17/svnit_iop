#include <stdio.h>
int main()
{
    printf("Enter the number of lines you want\n");
    int n;
    scanf("%d",&n);
    int j=0;
    while(j<n)
    {
        for(int i=0;i<n;i++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
        j++;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Enter the number of rocks\n");
    int n;
    scanf("%d",&n);
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter composition of rock %d\n",i+1);
        char rock[20];
        scanf("%s",rock);
        int x=0;
        while(rock[x]!='\0')
        {
            if( a[(int)rock[x]-97]==i)
            {
            a[(int)rock[x]-97]++;
            }
            if(i==n-1)
            {
                if(a[(int)rock[x]-97]==n)
                {
                    c++;
                }
            }
            x++;
        }
    }
    printf("The number of gemstones are %d\n",c);


}
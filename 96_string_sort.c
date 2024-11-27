#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a string\n");
    char str[100];
    fgets(str,100,stdin);
    int n=strlen(str);
    n=n-1;
    for(int i=n-1;i>1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("%s",str);
}
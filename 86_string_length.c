#include <stdio.h>
int length(char c[]);
int main()
{
    printf("Enter a string\n");
    char c[100];
    fgets(c,100,stdin);
    int len=length(c);
    printf("LENGTH = %d\n",len);
}
int length(char c[])
{
    int l=0;
    while(c[l]!='\0')
    {
        l++;
    }
    return (--l);
}
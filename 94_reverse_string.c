#include <stdio.h>
void reverse(int n, char *ptr , char*ptr2);
int main()
{
    printf("Enter a string\n");
    char str[100];
    fgets(str,100,stdin);
    int n=0;
    int i=0;
    while(str[i]!='\0')
    {
        n++;
        i++;
    }
    n -= 2;
    char rev[n+1];
    reverse(n , str , rev);
    printf("Reversed = ");
    puts(rev);
}
void reverse(int n , char *ptr , char *ptr2)
{
    int i=0;
    while(n>=0)
    {
        *(ptr2+n) = *(ptr+i);
        n--;
        i++;
    }
}
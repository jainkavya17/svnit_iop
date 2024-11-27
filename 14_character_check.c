#include <stdio.h>
int main()
{
    printf("Enter a character\n");
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("Lowercase letter\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase letter\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Symbol\n");
    }
    return 0;

}
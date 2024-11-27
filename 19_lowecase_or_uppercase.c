#include <stdio.h>
int main()
{
    printf("enter a letter\n");
    char ch;
    scanf("%c",&ch);
    ch>='a'&& ch<='z' ? printf("lowercase\n") : printf("uppercase\n");
    return 0;
}
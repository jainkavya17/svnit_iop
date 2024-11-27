#include <stdio.h>
void check_vowel(char a);
int main()
{
    printf("Enter a character \n");
    char ch;
    scanf("%c",&ch);
    check_vowel(ch);
}
void check_vowel(char a)
{
    switch(a)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("It is a vowel\n");
        break;
        default:
        printf("It is not a vowel\n");
    }
}
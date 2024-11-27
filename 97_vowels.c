#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter a string\n");
    char str[100];
    fgets(str,100,stdin);
    char *ptr=str;
    int vowel=0;
    int i=0;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u' || *(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U' )
        {
            vowel++;
        }
        i++;
    }
    printf("Number of vowels are = %d\n",vowel);
}
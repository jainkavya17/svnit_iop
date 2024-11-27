#include <stdio.h>
int main()
{
    printf("Enter a sentence\n");
    char str[100];
    fgets(str,100,stdin);
    char *ptr=str;
    int i=0;
    int words=0;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)==' ')
        {
            words++;
        }
        i++;
    }
    words++;
    printf("The number of words are : %d\n",words);
}
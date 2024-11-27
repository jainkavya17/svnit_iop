#include <stdio.h>
int main()
{
    printf("Enter a string\n");
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    int characters=0;
    int spaces=0;
    char *ptr=str;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)==' ')
        {
            spaces++;
        }
        else
        {
            characters++;
        }
        i++;
    }
    printf("Length without spaces = %d\n",characters);
    printf("Length with spaces = %d\n",(characters+spaces));
}
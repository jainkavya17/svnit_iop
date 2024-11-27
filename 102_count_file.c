#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("102.txt" , "r");
    char ch = fgetc(fptr);
    int words=0;
    int lines=0;
    int characters=0;
    while(ch != EOF)
    {
        if(ch==' ')
        {
            words++;
        }
        characters++;
        if(ch=='\n')
        {
            words++;
            lines++;
            characters--;
        }
        ch = fgetc(fptr);
    }
    fclose(fptr);
    printf("The numbers of line are : %d\n",lines);
    printf("The numbers of words are : %d\n",words);
    printf("The numbers of characters are : %d\n",characters);
}
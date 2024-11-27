#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("99_vowel.txt" , "r");
    char ch;
    int vowel=0;
    while(ch != EOF)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            vowel++;
        } 
        ch=fgetc(fptr);  
    }
    printf("The number of vowels are = %d\n",vowel);
    fclose(fptr);
    return 0;
}
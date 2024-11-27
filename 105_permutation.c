#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int low, int high)
{
    if (low == high) 
    {
        printf("%s\n", str);
    } 
    else 
    {
        for (int i = low; i <= high; i++) 
        {
            swap((str + low), (str + i));
            permute(str, low + 1, high);
            swap((str + low), (str + i));
        }
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    printf("The permutations of the string are:\n");
    permute(str, 0, length - 1);

    return 0;
}
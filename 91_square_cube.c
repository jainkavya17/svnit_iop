#include <stdio.h>
int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int *ptr = &n;
    int sqaure = *ptr * *ptr;
    int cube = *ptr * *ptr * *ptr;
    printf("Square = %d\n",sqaure);
    printf("Cube = %d\n",cube);
}
#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    printf("Enter 2 numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("INPUT:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    swap(&a,&b);
    printf("OUTPUT\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
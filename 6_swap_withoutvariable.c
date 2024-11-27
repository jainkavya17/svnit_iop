#include <stdio.h>

int main() {
    // Write C code here
    printf("enter two numbers");
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("The given numbers are: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers are: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}
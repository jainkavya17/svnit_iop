#include <stdio.h>

int main() {
    // Write C code here
    printf("enter a number");
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("The numbver is neither even nor odd");
    }
    else if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}
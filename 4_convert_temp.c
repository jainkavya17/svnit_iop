#include <stdio.h>
int main()
{
    printf("enter the temparature in farenhiet\n");
    float f;
    scanf("%f",&f);
    float c=5.0/9.0*(f-32);
    printf("The temparature in celsius is : %f \n",c);
    return 0;
}
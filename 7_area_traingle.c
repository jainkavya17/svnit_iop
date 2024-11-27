#include <stdio.h>
int main()
{
    printf("Enter base and height of the triange in cm\n");
    float b,h;
    scanf("%f %f",&b ,&h);
    float area=0.5*b*h;
    printf("The area of given triangle is (in cm square) %f\n",area);
    return 0;

}
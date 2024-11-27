#include <stdio.h>
int main()
{
    enum color {RED , GREEN , BLUE , WHITE , BLACK };
    printf("choose a colour from \nred:0\ngreen:1\nblue:2\nwhite:3\nblack:4 \n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case RED:
        printf("The hex code of red is #FF0000\n");
        break;
        case GREEN:
        printf("The hex code of green is #008000\n");
        break;
        case BLUE:
        printf("The hex code of blue is #0000FF\n");
        break;
        case WHITE:
        printf("The hex code of white is #FFFFFF\n");
        break;
        case BLACK:
        printf("The hex code of black is #000000\n");
        break;
        default:
        printf("Wrong input");
    }

}
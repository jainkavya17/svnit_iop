#include <stdio.h>
int main()
{
    int m,p,c,e;
    printf("Enter marks in maths\n");
    scanf("%d",&m);
    printf("Enter marks in physics\n");
    scanf("%d",&p);
    printf("Enter marks in chemistry\n");
    scanf("%d",&c);
    printf("Enter marks in entrance examination\n");
    scanf("%d",&e);
    float cm= m/2+p/2+c/2+e;
    printf("CUT OFF MARKS : %f \n",cm);
    return 0;

}
#include <stdio.h>
int main()
{
    printf("Enter sales amount\n");
    float s;
    scanf("%f",&s);
    float c;
    if(s<=500)
    {
      c=0.05*s;
    }
    else if(s>500 && s<=2000)
    {
        c = 35 + 0.1*(s-500);
    }
    else if(s>2000 && s<=5000)
    {
        c = 185 + 0.12*(s-2000);
    }
    else
    {
        c= 0.125*s;
    }
    printf("commission is : %f\n",c);
    return 0;
}
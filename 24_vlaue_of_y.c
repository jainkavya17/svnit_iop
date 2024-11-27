#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter the value of x");
    float x;
    scanf("%f",&x);
    printf("enter the value of n");
    float n;
    scanf("%f",&n);
    float y;
    if(n==1)
    {
      y=1+x;
    }
    else if(n==2){
        y=1 + x/n;
    }
    else if(n==3)
    {
        y=1+ pow(x,n);
    }
    else{
        y=1 + n*x;
    }
    printf("The value of y is : %f\n",y);
    return 0;


}
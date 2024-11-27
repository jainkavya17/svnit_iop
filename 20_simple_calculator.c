#include <stdio.h>
int main()
{
    printf("For addition press :1\nFor substraction press :2\nFor multiplication press :3\nFor divison press :4\n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter the two numbers to be added\n");
        int a,b;
        scanf("%d %d",&a,&b);
        int s=a+b;
        printf("The sum is: %d\n",s); 
        break;
        case 2:
        printf("Enter the two numbers , second will be subtracted from first\n");
        int c,d;
        scanf("%d %d",&c,&d);
        int diff=c-d;
        printf("The difference is: %d\n",diff); 
        break;
        case 3:
        printf("Enter the two integers to be multiplied\n");
        int e,f;
        scanf("%d %d",&e,&f);
        int m=e*f;
        printf("The product is: %d\n",m); 
        break;
        case 4:
        printf("Enter the two numbers to be divided , second will divide the first\n");
        float g,h;
        scanf("%f %f",&g,&h);
        float div=g/h;
        printf("The division is: %f\n",div); 
        break;
    }
    return 0;
}
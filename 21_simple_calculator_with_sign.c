#include <stdio.h>
int main()
{
    printf("For addition press :+\nFor substraction press :-\nFor multiplication press :*\nFor divison press :/\nFor modulus press :|\n");
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("Enter the two numbers to be added\n");
        int a,b;
        scanf("%d %d",&a,&b);
        int s=a+b;
        printf("The sum is: %d\n",s); 
        break;
        case '-':
        printf("Enter the two numbers , second will be subtracted from first\n");
        int c,d;
        scanf("%d %d",&c,&d);
        int diff=c-d;
        printf("The difference is: %d\n",diff); 
        break;
        case '*':
        printf("Enter the two integers to be multiplied\n");
        int e,f;
        scanf("%d %d",&e,&f);
        int m=e*f;
        printf("The product is: %d\n",m); 
        break;
        case '/':
        printf("Enter the two numbers to be divided , second will divide the first\n");
        float g,h;
        scanf("%f %f",&g,&h);
        float div=g/h;
        printf("The division is: %f\n",div); 
        break;
        case '|':
        printf("Enter the number for modulus function\n");
        float i;
        scanf("%f",&i);
        if(i<0)
        {
        i=0-i;
        }
        printf("The mod is:%f\n",i);
    }
    return 0;
}
#include <stdio.h>
int main()
{
   printf("Enter basic salary\n");
   float b;
   scanf("%f",&b);
   printf("Enter HRA\n");
   float h;
   scanf("%f",&h);
   printf("Enter other allowence\n");
   float a;
   scanf("%f",&a);
   float gs=a+b+h;
   printf("The gross salary is: %f \n",gs);
   return 0;
}
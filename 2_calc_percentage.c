#include <stdio.h>
int main()
{
    printf("enter the marks of 5 subjects one by one\n");
    int s1,s2,s3,s4,s5;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    int tot=s1+s2+s3+s4+s5;
    printf("Total marks out of 500 : %d\n",tot);
    double p=tot/5;
    printf("Percentage : %f",p);
    return 0;
}
#include <stdio.h>
int main()
{
    printf("enter the marks of 5 subjects one by one\n");
    int s1,s2,s3,s4,s5;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    int tot=s1+s2+s3+s4+s5;
    printf("Total marks out of 500 : %d\n",tot);
    double p=tot/5;
    if(p<30)
    {
        printf("divison : F\n");
    }
    else if(p>=30 && p<60)
    {
        printf("divison : D\n");
    }
    else if(p>=60 && p<80)
    {
        printf("divison : C\n");
    }
    else if(p>=80 && p<90)
    {
        printf("divison : B\n");
    }
    else 
    {
        printf("divison : A\n");
    }
    return 0;
}
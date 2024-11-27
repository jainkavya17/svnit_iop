#include <stdio.h>
#include <string.h>
typedef struct officemembers{
    int e_num;
    char e_name[100];
    float basic_pay;
} ofm;
void InfoOut(ofm *ptr);
int main()
{
    printf("Enter number of employees\n");
    int n;
    scanf("%d",&n);
    ofm emp[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the details of employee %d\n",(i+1));
        printf("Enter employee num\n");
        scanf("%d",&emp[i].e_num);
        printf("Enter employee name\n");
        scanf("%s",emp[i].e_name);
        printf("Enter basic pay\n");
        scanf("%f",&emp[i].basic_pay);
    }
    for(int i=0;i<n;i++)
    {
        printf("EMPLOYEE %d\n\n",i+1);
        InfoOut(&emp[i]);
    }
}
void InfoOut(ofm *ptr)
{
    printf("EMPLOYEE NUMBER = %d\n",ptr->e_num);
    printf("EMPLOYEE NAME = %s\n",ptr->e_name);
    printf("EMPLOYEE BASIC PAY = %f\n\n",ptr->basic_pay);
}
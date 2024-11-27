#include <stdio.h>
struct student
    {
        char firstname[100];
        int marks;
    };
void display(struct student []);
int main()
{
    
    struct student std[10];
    
    for(int i=0;i<10;i++)
    {
        printf("Enter first name of student %d\n",i+1);
        scanf("%s",std[i].firstname);
        printf("Enter marks of student %d\n",i+1);
        scanf("%d",&std[i].marks);
    }
    display(std);
}
void display(struct student std[] )
{
    for(int i=0;i<10;i++)
    {
        if(std[i].marks>500)
        {
            printf("%s - %d \n",std[i].firstname , std[i].marks);
        }
    }
}
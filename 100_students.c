#include <stdio.h>
typedef struct information{
    int roll;
    char name[100];
    int tot_marks;
} stu;
int main()
{
    FILE *fptr;
    fptr = fopen("100_LNMIITSTUDENT.txt","w");
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    stu student[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student %d\n",i+1);
        scanf("%s",student[i].name);
        printf("Enter roll no of student %d\n",i+1);
        scanf("%d",&student[i].roll);
        printf("Enter total marks of student %d\n",i+1);
        scanf("%d",&student[i].tot_marks);
        fprintf(fptr , "STUDENT %d\n" , (i+1));
        fprintf(fptr , "NAME : %s\n" , student[i].name);
        fprintf(fptr , "ROLL NO : %d\n" , student[i].roll);
        fprintf(fptr , "TOTAL MARKS : %d\n" , student[i].tot_marks);
    }
    fclose(fptr);
}
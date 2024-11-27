#include <stdio.h>
int main()
{
    int r[10][5];
    printf("Enter the following details\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter roll number of student %d\n",i+1);
        scanf("%d",&r[i][0]);
        printf("Enter marks of subject1 of student %d",i+1);
        scanf("%d",&r[i][1]);
        printf("Enter marks of subject2 of student %d",i+1);
        scanf("%d",&r[i][2]);
        printf("Enter marks of subject3 of student %d",i+1);
        scanf("%d",&r[i][3]);
        r[i][4]=r[i][1]+r[i][2]+r[i][3];
    }
    int totmax=0;
    int totindex=0;
    for(int j=1;j<4;j++)
    {
        int max=0;
        int index =0;
        printf("The total marks by each student are\n");
        for(int i=0;i<10;i++)
        {
            if(j==1)
            {
                printf("Total marks by roll number %d are %d\n",r[i][0],r[i][4]);
            }
            if(max < r[i][j])
            {
                max = r[i][j];
                index = i;
            }
            if(r[i][4]>totmax)
            {
                totmax=r[i][4];
                totindex=i;
            }
        }
        printf("The max marks of subject%d are %d and obtained by roll number %d\n",j,max,r[index][0]);
    }
    printf("The max total marks are %d and are obtained by roll number %d\n",totmax,r[totindex][0]);
    return 0;
}
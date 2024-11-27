#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter number of rows in matrix 1\n");
    int r;
    scanf("%d",&r);
    printf("Enter number of coloumns in matrix 1\n");
    int c;
    scanf("%d",&c);
    int *ptr;
    ptr =(int*)calloc(r*c,sizeof(int));
    printf("Enter elements row wise\n");
    for(int i=0;i<r*c;i++)
    {
       scanf("%d",&ptr[i]);
    } 
    printf("Enter number of rows in matrix 2\n");
    int r2;
    scanf("%d",&r2);
    printf("Enter number of coloumns in matrix 2\n");
    int c2;
    scanf("%d",&c2);
    int *ptr2;
    ptr2 =(int*)calloc(r2*c2,sizeof(int));
    printf("Enter elements row wise\n");
    for(int i=0;i<r2*c2;i++)
    {
       scanf("%d",&ptr2[i]);
    } 
    int *ptr3;
     ptr3 =(int*)calloc(r*c2,sizeof(int));
     int h=0;
     int count=0;
     int k=0;
    for(int j=0;j<r*c;j++)
    {
        int sum=0;
        k=0;
        if(j%r==0&j!=0)
        {
            h++;
        
        }
        for(int i=0+h*c;i<c+h*c;i++)
        {
            sum+=ptr[i]*ptr2[j%c2+(k*(c2))];
            k++;
        }
        ptr3[count]=sum;
        count++;
    }
    printf("OUTPUT\n");
    for(int i=0;i<r*c2;i++)
    {
        printf("%d\t",ptr3[i]);
        if((i+1)%c2==0)
        {
            printf("\n");
        }
    }
}
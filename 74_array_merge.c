#include <stdio.h>
int main()
{
    printf("Enter the length of array 1\n");
    int l1;
    scanf("%d",&l1);
    printf("Enter the length of array 2\n");
    int l2;
    scanf("%d",&l2);
    int a1[l1];
    int a2[l2];
    printf("Enter %d entries of array 1 in ascending order\n",l1);
    for(int i=0;i<l1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter %d entries of array 2 in ascending order\n",l2);
    for(int i=0;i<l2;i++)
    {
        scanf("%d",&a2[i]);
    }
    int l3 = l1+l2;
    int a3[l3];
    int c2=0,c1=0;
     for(int i=0;i<l3;i++)
     {
        if(c1 != l1 && c2 != l2)
        {
        if(a1[c1]<a2[c2])
        {
            a3[i]=a1[c1];
            c1++;
        }
        else
        {
            a3[i]=a2[c2];
            c2++;
        }
        }
        else if(c2==l2)
        {
            a3[i]=a1[c1];
            c1++;
        }
        else
        {
            a3[i]=a2[c2];
            c2++;
        }
        
        printf("%d ",a3[i]);
     }
    return 0;
}
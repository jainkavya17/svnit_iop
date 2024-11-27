#include <stdio.h>
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    printf("Enter the size of array\n");
    int l;
    scanf("%d",&l);
    int a[l];
    printf("Enter %d numbers one by one\n",l);
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number by which array has to be rotated\n");
    int n;
    scanf("%d",&n);
    printf("GIVEN ARRAY\n");
    display(a,l);
    printf("ROTATED ARRAY\n");
    int temp;
    for(int i=0;i<n;i++)
    {
        int first=a[0];
        for(int j=0;j<l-1;j++)
        {
            a[j]=a[j+1];
        }
        a[l-1]=first;
    }
    display(a,l);
    int start=0,end=l-1;
    int pivot;
    while(start < end)
    {
        if(a[start]<a[end])
        {
            pivot = start;
            break;
        }
        int mid=(start + end)/2;
        if(a[mid]>a[end])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    
    pivot = start;
    printf("The pivot index is %d \n",pivot);
    return 0;
}
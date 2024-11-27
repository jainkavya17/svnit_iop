#include <stdio.h>
int main()
{
    printf("Enter the number of elements you want\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements one by one\n");
    int s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s += arr[i];
    }
    printf("The sum of all the elements is : %d\n",s);
    return 0;
}
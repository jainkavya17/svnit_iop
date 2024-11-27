#include <stdio.h>
int main()
{
    printf("Enter number of jars\n");
    int jars;
    scanf("%d",&jars);
    printf("Enter number of operations\n");
    int op;
    scanf("%d",&op);
    int sum=0;
    for(int i=0;i<op;i++)
    {
        printf("OPERATION %d\n",i+1);
        printf("Enter lower jar index\n");
        int lowj;
        scanf("%d",&lowj);
        printf("Enter higher jar index\n");
        int highj;
        scanf("%d",&highj);
        printf("Enter number of candies\n");
        int candy;
        scanf("%d",&candy);
        while(lowj<=highj)
        {
            sum += candy;
            lowj++;
        }
    }
    int avg= sum/jars;
    printf("The average number of candies are %d\n",avg);

}
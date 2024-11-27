#include <stdio.h>
int main()
{
    printf("Enter time in : hours then minutes then seconds one by done\n");
    int h,m,s;
    scanf("%d %d %d",&h,&m,&s);
    int tot=(h*60*60)+(m*60)+s;
    printf("Total seconds :%d \n",tot);
    return 0;

}
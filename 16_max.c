#include <stdio.h>

int main(){
    printf("enter 3 numbers one by one");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the greatest is : %d \n",a);
        }
        else{
            printf("the greatest is : %d \n",c);
        }
    }
    else{
       if(b>c)
        {
            printf("the greatest is : %d \n",b);
        }
        else{
            printf("the greatest is : %d \n",c);
        }
    }
    return 0;
}
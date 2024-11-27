#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter seconds");
    int sec;
    scanf("%d",&sec);
    int min=sec/60;
    int rem=sec%60;
    int hours=min/60;
    int mrem=min%60;
    int days=hours/24;
    int hrem=hours%24;
    printf("time in days:hours:min:sec: %d",days);
    printf(":%d",hrem);
    printf(":%d",mrem);
    printf(":%d\n",rem);
    

    return 0;
}
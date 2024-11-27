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
    printf("time in hours:min:sec: %d",hours);
    printf(":%d",mrem);
    printf(":%d",rem);
    

    return 0;
}
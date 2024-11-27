#include <stdio.h>
int main()
{
    printf("You are into a guessing game \nGuess a number between 1 and 20 \nLesser the number of guesses luckier you are!!\n");
    int n = 17;
    printf("Start Guessing\n");
    int g;
    scanf("%d",&g);
    int c=1;
    while(g!=n)
    {
        c++;
        if(g<n)
        {
            printf("TRY HIGHER\n");
        }
        else{
            printf("TRY LOWER\n");
        }
        scanf("%d",&g);
    }  
    printf("YES!! YOU FOUND IT \nNUMBER OF GUESSES : %d\n",c);  
}
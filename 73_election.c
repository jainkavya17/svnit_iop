#include <stdio.h>
int main()
{
    printf("Enter the number of voters\n");
    int n;
    scanf("%d",&n);
    int votes[5];
    for(int i=0;i<5;i++)
    {
        votes[i]=0;
    }
    int sb=0;
    for(int i=0;i<n;i++)
    {
        printf("Voter number %d , enter vote (1-5)\n",i+1);
        int vote;
        scanf("%d",&vote);
        if(vote>=1 && vote<=5)
        {
            votes[vote-1]++;
        }
        else
        {
            printf("SPOILT BALLOT!\n");
            sb++;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("Number of vote(s) for candidate number %d is(are) %d\n",i+1,votes[i]);
    }
    printf("Number of spoilt ballots are %d\n",sb);
    return 0;
}
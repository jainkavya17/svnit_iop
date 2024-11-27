#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter number of strings \n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter string number %d\n",i+1);
        char str[100];
        scanf("%s",str);
        int len=strlen(str);
        if(len==2)
        {
            if(str[0]<str[1])
            {
                printf("%c%c\n",str[1],str[0]);
            }
            else
            {
                printf("no answer\n");
            }
        }
        else
        {
            int index=-1;
            for(int j=len-1;j>=1;j--)
            {
                if(str[j]>str[j-1])
                {
                    index = j-1;
                    break;
                }
            }
            if(index != -1)
            {
            char temp;
            //bubble sort start
            for(int k=len-1;k>index+1;k--)
            {
                for(int m=index+1;m<k;m++)
                {
                if(str[m]>str[m+1])
                {
                    temp=str[m];
                    str[m]=str[m+1];
                    str[m+1]=temp;
                }
                }
            }
            //bubble sort end
            int index2;
            for(int k=index+1;k<len;k++)
            {
                if(str[k]>str[index])
                {
                    index2=k;
                    break;
                }
            }
            temp=str[index];
            str[index]=str[index2];
            str[index2]=temp;
            puts(str);
            }
            else
            {
                printf("No answer\n");
            }
        }
    }
}
#include <stdio.h>
void copy(char *ptr1 , char *ptr2);
void concat(char *ptr1 , char *ptr2);
void reverse(char *ptr);
int compare(char str1[] , char str2[]);
int main()
{
    printf("For copy press 1\nFor concat press 2\nFor reverse press 3\nFor compare press 4\n");
    int n;
    scanf("%d",&n);
    if(n==1 || n==2 || n==4)
    {
        printf("Enter string 1\n");
        char str1[100];
        scanf("%s",str1);
        printf("Enter string 2\n");
        char str2[100];
        scanf("%s",str2);
        if(n==1)
        {
            copy(str1,str2);
            printf("The copied string : %s\n",str1);
        }
        if(n==2)
        {
            concat(str1,str2);
            printf("The joined string : %s\n",str1);
        }
        if(n==4)
        {
            int a = compare(str1,str2);
            printf("The comparision : %d\n",a);
        }

    }
    if(n==3)
    {
        printf("Enter a string\n");
        char str1[100];
        scanf("%s",str1);
        reverse(str1);

    }

}
void copy(char *ptr1 , char *ptr2)
{
    int i=0;
    while(*(ptr2+i)!='\0')
    {
        *(ptr1+i) = *(ptr2+i);
        i++;
    }
    *(ptr1+i) = '\0';
}
void concat(char *ptr1 , char *ptr2)
{
    int i=0;
    while(*(ptr1+i)!='\0')
    {
        i++;
    }
    int j=0;
    while(*(ptr2+j)!='\0')
    {
        *(ptr1+i+j) = *(ptr2+j);
        j++;
    }
    *(ptr1+i+j) = '\0';
}
void reverse(char *ptr)
{
    int i=0;
    while(*(ptr+i)!='\0')
    {
         i++;
    }
    char str[i];
    int f=i-1;
    for(int j=0;j<i;j++)
    {
        str[j] = *(ptr+f);
        f--;
    }
    str[i]='\0';
    printf("The reversed string : %s\n",str);
}
int compare(char str1[] , char str2[])
{
    int j=0;
    int diff=0;
    while(str1[j]!='\0' && str2[j]!='\0')
    {
        diff=(int)(str1[j]-str2[j]);
        if(diff!=0)
        {
            break;
        }
        j++;
    }
    if(diff!=0)
    {
        return diff;
    }
    else
    {
        if(str1[j]=='\0'&&str2[j]=='\0')
        {
            return 0;
        }
        else if(str1[j]=='\0')
        {
            return (0-(int)str2[j]);
        }
        else if(str2[j]=='\0')
        {
            return ((int)str1[j]);
        }
    }
}

#include <stdio.h>
struct book{
    char name[100];
    float price;
    int pages;
};
void ReadInfo(struct book *ptr);
void displayInfo(struct book *ptr);
int main()
{
    struct book info;
    ReadInfo(&info);
    displayInfo(&info);
}
void ReadInfo(struct book *ptr)
{
    printf("Enter book title\n");
    fgets(ptr->name,100,stdin);
    printf("Enter number of pages\n");
    scanf("%d",&ptr->pages);
    printf("Enter price\n");
    scanf("%f",&ptr->price);
}
void displayInfo(struct book *ptr)
{
    printf("\n");
    printf("TITLE : %s",ptr->name);
    printf("NO. OF PAGES : %d\n",ptr->pages);
    printf("PRICE : %f\n",ptr->price);
}
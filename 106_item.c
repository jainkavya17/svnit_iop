#include <stdio.h>
#include <string.h>
int main()
{
    struct item
    {
        char item_name[100];
        int quantity;
        float price;
        float amount;
    };
    struct item customer1;
    printf("Enter item name \n");
    char name[100];
    fgets(name,100,stdin);
    strcpy(customer1.item_name , name);
    printf("Enter quantity of item\n");
    scanf("%d",&customer1.quantity);
    printf("Enter the price\n");
    scanf("%f",&customer1.price);
    printf("\n");
    customer1.amount=customer1.quantity*customer1.price;
    printf("ITEM NAME: ");
    puts(customer1.item_name);
    printf("QUANTITY: %d\n",customer1.quantity);
    printf("PRICE: %f\n",customer1.price);
    printf("AMOUNT = %f\n",customer1.amount);
}

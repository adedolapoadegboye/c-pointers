#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items
{
    char itemName[10];
    int quantity;
    float price;
    float amount;
};

int readItem(struct items *item)
{
    printf("Enter item name: ");
    scanf("%s", item->itemName);
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    printf("Enter price: ");
    scanf("%f", &item->price);
    item->amount = item->quantity * item->price;
    return 0;
}

int printItem(struct items *item)
{
    printf("Item name is %s", item->itemName);
    printf("Item quantity is %i", item->quantity);
    printf("Item price is %f", item->price);
    printf("Item amount is %f", item->amount);
    return 0;
}

int main()
{
    struct items example, *pexample = &example;
    readItem(pexample);
    printItem(pexample);
}

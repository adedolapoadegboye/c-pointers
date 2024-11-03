#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items
{
    char *itemName;
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
    printf("\nItem name is %s", item->itemName);
    printf("\nItem quantity is %i", item->quantity);
    printf("\nItem price is %f", item->price);
    printf("\nItem amount is %f", item->amount);
    return 0;
}

int main()
{
    struct items example, *pexample = &example;
    pexample->itemName = (char *)malloc(10 * sizeof(char));
    readItem(pexample);
    printItem(pexample);
    free(example.itemName);
}

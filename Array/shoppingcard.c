

#include <stdio.h>
int main() 
{
    int items = 5;
    char itemName[5][20];
    float itemPrice[5];

    printf("Enter item details:\n");
    for (int i = 0; i < items; i++) 
    {
        printf("Item %d Name: ", i + 1);
        scanf("%s", itemName[i]);
        printf("Item %d Price: ", i + 1);
        scanf("%f", &itemPrice[i]);
    }

    printf("Shopping Cart:\n");
    for (int i = 0; i < items; i++) 
    {
        printf("%s: $%.2f\n", itemName[i], itemPrice[i]);
    }

    return 0;
}

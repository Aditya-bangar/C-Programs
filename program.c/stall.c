#include<stdio.h>
int main()
{
    int choice,tea,coffee,coldCoffee,totalPrice;
    printf("Welcome to our Tea Stall Counter! \n");
    printf("Our menu \n");
    printf("Enter-1.Tea --------------------- Rs. 10 \n");
    printf("Enter-2.Coffee ------------------ Rs. 20 \n");
    printf("Enter-3.Cold coffee ------------- Rs. 50 \n");

    printf("Enter Your choice \n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("How many cups of refreshing tea? \n");
        scanf("%d",&tea);
        totalPrice = 10 * tea;
        printf("Total for [%d] cup(s): Rs. [%d] \n",tea,totalPrice);
    }
    else if(choice==2)
    {
        printf("How many cups of aromatic coffee? \n");
        scanf("%d",&coffee);
        totalPrice = 20 * coffee;
        printf("Total for [%d] cup(s): Rs. [%d] \n",coffee,totalPrice);
    }else if(choice==3)
    {
        printf("How many cups of chilled cold coffee? \n");
        scanf("%d",&coldCoffee);
        totalPrice = 50 * coldCoffee;
        printf("Total for [%d] cup(s): Rs. [%d] \n",coldCoffee,totalPrice);        
    }else
    {
        printf("You entered wrong choice");
    }


}
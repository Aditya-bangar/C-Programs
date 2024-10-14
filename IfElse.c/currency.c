
#include <stdio.h>

int main()
{
    int  amount, exchange_rate;
    printf("Enter the amount in the source currency");
    scanf(" %d",&amount);
    printf("Enter the exchange rate (source to target)");
    scanf(" %d",&exchange_rate);

    
    float converted_amount = amount* exchange_rate;

    printf("Equivalent amount in the target currency:%f ",converted_amount);

    return 0;
}
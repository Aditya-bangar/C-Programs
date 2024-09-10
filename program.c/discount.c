#include <stdio.h>

int main() {
    int totalPrize;
    printf("Enter prize: ");
    scanf("%d", &totalPrize);

    
    (totalPrize > 1000) ? 
        (totalPrize > 5000 ? printf("You got 10 percent discount you have to pay: %.2f \n",totalPrize-(totalPrize*0.10)) : printf("You got 5 percent discount you have to pay: %.2f \n",totalPrize-(totalPrize*0.05))) 
        : printf("You are not eligible for discount\n");

return 0;
}
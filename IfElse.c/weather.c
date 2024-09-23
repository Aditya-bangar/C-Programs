

#include <stdio.h>
int main() {
    int temperature;

    printf("Enter temperature (in Celsius): ");
    scanf("%d", &temperature);

    if (temperature > 30) {
        printf("Hot weather. Stay hydrated!\n");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("Mild weather. Enjoy outdoors!\n");
    } else if (temperature < 20) {
        printf("Cold weather. Wear warm clothes!\n");
    }

    return 0;
}

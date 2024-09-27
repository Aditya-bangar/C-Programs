#include <stdio.h>

int main() {
    int days = 7;
    char dayName[7][10] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    float temperature[7];

    printf("Enter temperature for each day:\n");
    for (int i = 0; i < days; i++) {
        printf("%s: ", dayName[i]);
        scanf("%f", &temperature[i]);
    }

    printf("Weather Forecast:\n");
    for (int i = 0; i < days; i++) {
        printf("%s: %.2f°C\n", dayName[i], temperature[i]);
    }

    return 0;
}

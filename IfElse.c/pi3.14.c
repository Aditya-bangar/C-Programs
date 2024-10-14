#include <stdio.h>
#define pi 3.14
int main() {
    int radius;
    int hight;
    printf("Enter the radius of the cylinder:");
    scanf("%d",&radius);
    printf("Enter the height of the cylinder:");
    scanf("%d",&hight);
    
    float surfaceArea = 2*pi*radius*radius+2*pi*radius*hight;
    // Write C code here
    printf("Surface area of cylender :%f",surfaceArea);

    return 0;
}
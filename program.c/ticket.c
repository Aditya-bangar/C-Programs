#include <stdio.h>

int main() {
    int numTiket,age,tiketPrice=300;
    printf("Enter number of tiket you want to purchase and your age : ");
    scanf("%d %d", &numTiket,&age);
    
    //if age is between 60-100 give 10% discount
    int totalBill = numTiket * tiketPrice;
    float diss = totalBill - (totalBill* 0.10);
    
    (age>=60 && age<=100)?printf("You are senior cityson you have 10 percent discount you have to pay just :%.2f",diss):printf("You are young you have to pay : %d",totalBill);
return 0;
}
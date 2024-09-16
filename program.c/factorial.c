#include<stdio.h>
int main()
{
    int num,factorial=1;
    printf("Enter a number");
    scanf("%d",&num);

    while (num)
    {
        factorial = factorial * num;
        num--;
    }
    printf("Factorial is %d",factorial);
}
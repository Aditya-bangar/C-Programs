#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("Enter a number ");
    scanf("%d",&num);

    while (num)
    {
        count++;
        num =num/10;
    }
    printf("Number is a %d digit number",count);
return 0;
}
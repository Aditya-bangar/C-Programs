
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    while (num)
    {
       sum = sum + num--;
    }
    printf("Sum of natural number is %d",sum);
    

}
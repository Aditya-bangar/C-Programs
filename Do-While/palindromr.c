#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enetr a number to check: ");
    scanf("%d",&num);

    int m=num;
    
    while (num!=0)
    {
        rem = num %10;
        rev=rev*10+rem;
        num=num/10;

    }
    if(rev==m)
    {
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }
}
#include<stdio.h>
int main()
{
    int num;

    puts("Enter the number \n");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Positive");
    }
    if(num<0)
    {
        printf("Nrgative");
     }if(num ==0)
     {
        printf("number is zero");
    }
return 0;    
}
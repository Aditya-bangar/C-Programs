#include<stdio.h>
int main()
{
    int first,second;

    puts("Enter two number \n");
    scanf("%d %d",&first,&second);

    if(first%second==0){
        printf("%d is divisible by %d",first,second);
    }else{
        printf("%d is not divisible by %d",first,second);
    }
    return 0;
}
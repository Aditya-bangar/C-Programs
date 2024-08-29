#include<stdio.h>
int main()
{
    int a,b,c;

    puts("Enter three sides of trangle \n");
    scanf("%d %d %d ",&a,&b,&c);

    if(a + b >  c){
        puts("Valid");
    }else{
        puts("Invalid");
    }
    return 0;
}
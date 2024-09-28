#include<stdio.h>
int main()
{
    int num[9]={1,2,3,4,5,6,7,8,9},i;
    
    printf("Even Elements: ");
    for(i=0;i<10;i++)
{
    
    if(num[i]%2==0)
    printf("%d\t",num[i]);
}
 printf("Odd Elements: ");
    for(i=0;i<10;i++)
{
    
    if(num[i]%2!=0)
    printf("%d\t",num[i]);
}
}

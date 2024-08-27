
#include<stdio.h>
int main()
{
    int num[10];
    printf("Enter array elements :");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&num[i]);
    }
    for(int i=0;i<=10;i++)
    {
    printf("Element %d is : %d \n",i,num[i]);
    }
}
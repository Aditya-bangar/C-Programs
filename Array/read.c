//  reading the array from user 

#include<stdio.h>
int main()
{
    int a[10];
    printf("Enetr three numbers");
    for(int i=0; i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
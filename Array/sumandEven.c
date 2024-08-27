#include<stdio.h>
int main()
{
    int num[10],eleNum;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&eleNum);

    for(int i=0;i<eleNum;i++)
    {
        printf("\n Element %d is :",i);
        scanf("%d",&num[i]);
    }
    printf("\n Even numbers :");
    for(int i=0;i<eleNum;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d \t",num[i]);
        }
    }
    printf("\n Odd numbers :");
    for(int i=0;i<eleNum;i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d \t",num[i]);
        }
    }
    return 0;
}
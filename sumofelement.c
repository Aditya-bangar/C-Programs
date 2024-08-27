#include<stdio.h>
int main()
{
    int num[10],eleNum,arraySum=0;
    printf("Input the number of elements to be stored in the array");
    scanf("%d",&eleNum);

    for(int i=0;i<eleNum;i++)
    {
        printf("\n Element %d :",i);
        scanf("%d",&num[i]);
        arraySum=arraySum+num[i];
    }
    printf("\n Sum of all elements stored in the array is : %d",arraySum);
}
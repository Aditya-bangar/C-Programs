#include<stdio.h>
int main()
{
    int num[10],arrNum,i,search,sCount;
    printf("Enter array size between 1-10 :");
    scanf("%d",&arrNum);

    if(arrNum>10 || arrNum<0)
    {
        printf("Invalid array size, give 1-10 plz ");
        return 0;
    }

    for(i=0;i<arrNum;i++)
    {
        printf("%d Element :",i);
        scanf("%d",&num[i]);
    }

    printf("Which number you want to search :");
    scanf("%d",&search);

    for(sCount=i=0;i<arrNum;i++)
    {
        if(num[i]==search)
        {
            sCount++;
            printf("The number %d is present at %d position \n",search,i);
        }
    }
    if(sCount==0)
    printf("%d is not present in an array",search);
}
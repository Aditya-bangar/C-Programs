#include<stdio.h>
int main()
{
    int num[10],eleNum,count;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&eleNum);

    printf("\n Enter elements :");
    for(int i=0;i<eleNum;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\n Prime number in the array are : ");
    for(int i=0;i<eleNum;i++)
    {
        count=0;
        for(int j=1;j<=num[i];j++)
        {
            if (num[i]%j==0)
            count++;
        }
        if(count==2)
        printf("%3d",num[i]);
    }
return 0;


}
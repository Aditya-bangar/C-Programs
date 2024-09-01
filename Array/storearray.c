#include<stdio.h>
int main()
{
    int num[10],arrSiz,count,i,j;
    puts("Enter the size of array :");
    scanf("%d",&arrSiz);

    printf("Enter %d elements :\n",arrSiz);
    for(i=0;i<arrSiz;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&num[i]);
    }
    printf("The unique elements found in the array are :\n");
    for(i=0;i<arrSiz;i++)
    {
        count=0;
        for(j=0;j<arrSiz;j++)
        {
            if(num[i]==num[j] && i!=j)
            {
                count++;
                break;
            }
            
        }
        if(count==0)
        printf("%3d",num[i]);
    }
}
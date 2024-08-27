#include<stdio.h>
int main()
{
    int arr[8]={11,26,38,45,54,69,70};
    int sumEven = 0;
    int sumOdd =0;
    for(int i=0;i<=7;i++)
    {
    if(i%2==0)
    {
    sumEven += arr[i];
    }
    else{
    sumOdd += arr[i];
    }
    }
    printf("sum of even index element and sum of odd  index element differencce:\n");
    printf("%d",sumEven-sumOdd);
    return 0;
    
}
#include<stdio.h>
int main()
{
    int num,checkNum=0,orignal;
    printf("Enetr a number: ");
    scanf("%d",&num);
    orignal=num;

    while (num)
    {
        if(orignal%num==0){
            checkNum = checkNum+num;
        }
        num--;
    }
    checkNum = checkNum-orignal;
    if(checkNum==orignal)
    {
        printf("Perfect Number");
    }else{
        printf("Not Perfect number");
    }
    
}
#include<stdio.h>
int main()
{
    char ch;
    float minBal,diposit,widrall,ballence;

    printf("Starting with a Minimum balance of 2000 input your min balence \n");
    scanf("%f",&minBal);

    if (minBal<1)
    {
    printf("Ammount Can't be stored \n");
    return 0;
    }
    printf("What do you want to do Widral-[W] or Diposit [D]");
    scanf(" %c",&ch);
    if (ch=='d' || ch=='D')
    switch (ch)
    {
    case 'd': case 'D':
            printf("How much ammount you want to deposit\n");
            scanf("%f",&diposit);
            if(diposit<1){
            printf("Invalid ammount");
            }
            ballence = minBal + diposit;
            printf("Your balance is %.2f",ballence);
            break;
case 'w': case 'W':
            printf("How much ammount you want to Widrall\n");
            scanf("%f",&widrall);
            if(widrall<1 || widrall>minBal){
            printf("Invalid ammount");
            return 0;
            }
            ballence=minBal-widrall;
            printf("Your balance is %.2f",ballence);
            break;
    
    default:
        printf("invalid input");
        break;

    }
}
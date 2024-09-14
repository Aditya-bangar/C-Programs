#include<stdio.h>
int main()
{
    int age,ticket;
    float hight,totalTicket;
    char vipPass;
    printf("Enter your Age: \n");
    scanf("%d",&age);
    printf("Enter Your Hight: \n");
    scanf("%f",&hight);
    printf("Do You have VIP pass (Enter ['Y'] for Yes and ['N'] for No)");
    scanf(" %c",&vipPass);

    if (age<=0 || hight<=0)
    {
        printf("\n Error !!! You Enterd negative Hight or Age");
        return 0;
    }
    else if(age<=3)
    {
        printf("\n You are a little kid You allowed for free!!! \n");
        return 0;
    }else if(age>=4 && age<=12)
    {
        printf("\n You are Children aged 4 to 12 (inclusive) pay Rs.20");
        ticket=20;
        totalTicket =ticket;

    }else if(age>=13 && age<=64)
    {
         printf("\n You are Adults aged 13 to 64 (inclusive) pay Rs.100.");
         ticket=100;
         totalTicket =ticket;
 }else
    {
        printf("\n You are Seniors aged 65 and above pay Rs.50.");
        ticket=50;
        totalTicket =ticket;

    }

    if(hight>180)
    {
        printf("\n Your hight is above 180 have to pay Extra 50 Rs.");
        totalTicket = totalTicket + 50;
    }else if(hight<120)
    {
        printf("\n You hight is below 120cm you got 50 percent discount");
        totalTicket = totalTicket - totalTicket * 0.5;
    }else 
    {
        printf("\n Your hight is between 120-180 no additional charge applies");
    }
    if(vipPass=='y' || vipPass=='Y')
    {
        printf("\n You have VIP pass You got 10 percent discount");
        totalTicket = totalTicket - totalTicket * 0.1;
    }

    printf("\n The customers AGE :%d",age);
    printf("\n The customers HIGHT :%.2f",hight);
    printf("\n The customers VIP pass validation : %c",vipPass);
    printf("\n Your total Bill : %.2f",totalTicket);

}
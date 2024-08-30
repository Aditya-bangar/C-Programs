#include<stdio.h>
int main()
{
    int time , minute;

    puts("Enter the time in 24 hour and minute formate \n");
    scanf("%d %d",&time,&minute);

    if(time<=12){
        printf("The Time is %d:%d  AM",time,minute);
    }if(time>12){
        int for_12_hours =time-12;
        printf("The Time is %d:%d  PM",for_12_hours,minute);
    }
return 0;
}
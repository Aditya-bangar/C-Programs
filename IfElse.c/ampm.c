#include<stdio.h>
int main()
{
    int time , minute;

    puts("Enter the time in 24 hour and minute formate \n");
    scanf("%d %d",&time,&minute);

    if(time<=12){
        printf("The Time is %d:%d  AM",time,minute);
    }else{
        printf("The Time is %d:%d  PM",time,minute);
    }
return 0;

}
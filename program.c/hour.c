#include<stdio.h>

int main()
{
    int t;
    printf("enter the hour");
    scanf(" %d", &t);
    if(6<=t && t<=12)
    printf("good mor");
    if(t>13 && t<16)
    printf("afternoon");
    if(t>=16 && t<19)
    printf("evening");
    if(t>=20 && t<=24 || t>0 && t<6)
    printf("good night");
return 0;
}
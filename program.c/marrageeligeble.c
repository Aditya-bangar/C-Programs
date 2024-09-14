
#include<stdio.h>
int main()
{
    char ind,gender;
    int age;
    printf("Enter your nationality if Indian enter 'I' \n");
    scanf(" %c",&ind);
    printf("Enter your Gender MALE['M'] FEMALE['F'] and age");
    scanf(" %c %d",&gender,&age);
    if(ind!='I' && ind!='i')
    {
        printf("This program is only for indians SORRY!!!\n");
    }else if(gender=='M' || gender=='m' && age >=21 && age <= 50)
    {
        printf("Congratulations !!! \n You are elegeble for marrige");
    }else if(gender=='F' || gender=='f' && age >=18 && age <= 45)
    {
        printf("Congratulations !!! \n You are elegeble for marrige");
    }else{
        printf("Sorry !!!\n You are not elegeble for marrege");
    }
}
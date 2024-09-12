#include<stdio.h>
int main()
{
    int wheel,age,issue;

    puts("Enter how many wheeler vehical is? and age of your vehical in months \n");
    scanf("%d %d",&wheel,&age);
    char BikeName[20];
    char name[20];
    printf(" Enter your name and bike name");
    scanf(" %s %s",name ,BikeName);
    

    if(wheel != 2 && wheel != 3 && wheel != 4 )
    {
        printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }
    if(age >=0 && age <=8)
    {
        printf("your vehicle servie will done after a while");
    }
   
   else{
    printf("Enter 1 for tyre problem \n Enter 2 for fuel problem \n Enter 3 for engine issue \n Enter 4 for general services ");
    scanf("%d",&issue);

    if(issue =1)
    {
        int tyre;
        printf("how many tyres you are facing the issue ? \n");
        scanf("%d",&tyre);
        int bill = 400 * tyre;
          printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("Issue %d",issue);
        printf("Your bill is : %d",bill);

    }
    
    }
return 0;
}
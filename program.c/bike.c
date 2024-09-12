#include<stdio.h>
int main()
{
    int wheel,age,issue,bill;

    puts("Enter how many wheeler vehical is? and age of your vehical in months \n");
    scanf("%d %d",&wheel,&age);
    char BikeName[20];
    char name[20];
    printf(" Enter your firstname and bike name");
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
    label:
    printf("Enter 1 for tyre problem \n Enter 2 fṇor fuel problem \n Enter 3 for engine issue \n Enter 4 for general services ");
    scanf("%d",&issue);

    if(issue ==1)
    {
        int tyre;
         printf("how many tyres you are facing the issue ? \n");
        scanf("%d",&tyre);
        bill = 400 * tyre;
        
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("Tire proble");
        printf("Your bill is : %d",bill);

    }else if(issue==2)
    {
        bill = 1500; // fuel problem cost is 1500
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("fuels problem \n");
        printf("Your bill is : %d",bill);
    }else if(issue==3)
    {
        bill = 5000; // engine problem cost is 5000
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("engine issue \n");
        printf("Your bill is : %d",bill);
    }else if(issue==4)
    {
        bill = 1000; // General service cost is 5000
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("General Service \n");
        printf("Your bill is : %d",bill);
    }else{
        printf("\a You entered invalid input \n");
        goto label;
  }
    
    }
}

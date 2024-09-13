
#include<stdio.h>
int main()
{
    int uid=1001;
    int upass=1010;
    char uname[10];
    printf("Entr your name");
    scanf("%s",uname);
    printf("Enter user ID");
    scanf("%d",&uid);

    switch (uid)
    {
    case 1001:
        printf("Enter a password");
        scanf("%d",&upass);

        if (upass==1010)
        {
            printf("user %d \n",uid);
            printf("Name : %s ",uname);
        }else{
            printf("incorrect Passoword");
        }
        
        break;
    
    default:
    printf("Id doesnot exits");
      break;
    }
}
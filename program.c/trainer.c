#include <stdio.h>
int main()
{
    char Designation; // Developer,Trainer,Manager
    int total_sal, Home_Allowance = 10000, Food_Allowance = 3000, Travel_Allowance = 10000, sal = 35000;
    float tax;

    printf("Enter your Designation \n");
    scanf(" %c", &Designation);

    printf("Basic salury is %d \n", sal);

    if (Designation == 'D')
    {
        total_sal = sal + Home_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance;
            tax = total_sal * 0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %.2f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %.2f", tax);
        }
    }
    else if (Designation == 'T')
    {
          total_sal = sal + Home_Allowance + Food_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance + Food_Allowance;
            tax = total_sal *0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
    }
    else if (Designation == 'M')
    {
        total_sal = sal + Home_Allowance + Food_Allowance + Travel_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance + Food_Allowance + Travel_Allowance;
            tax = total_sal * 0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
    }
    else
     
    {
        puts("Invalid Input");
    }
}


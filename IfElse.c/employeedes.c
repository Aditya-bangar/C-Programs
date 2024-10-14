#include <stdio.h>

int main()
{
    char name[10],designation[10];
    int id,salary;
    printf("Enter employee name:");
    scanf(" %s",name);
    
    printf("Enter employee ID:");
    scanf("%d",&id);
    
    printf("Enter employee Designation:");
    scanf(" %s",designation);
    
    printf("Enter employee Salary:");
    scanf("%d",&salary);
    
    

    printf("Employee Details \n Name:%s \n Employee ID:%d \n Designation:%s \n Salary:%d ",name,id,designation,salary);
    return 0;
}

#include<stdio.h>
int main()
{
    int num1,num2,max,hcf;
    printf("Enetr two integer numbers: ");
    scanf("%d %d",&num1,&num2);
    max =(num1>num2)?num1:num2;

    for (int i=1; i<=max/2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("The HCF of %d and %d is %d",num1,num2,hcf);
    
}
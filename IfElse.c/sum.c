#include<stdio.h>

int main()
{
    int num, sum = 0, inr = 0;
    printf("Input the number of terms : ");
    scanf("%d", &num);

    printf("Series: ");
    for (int i = 1; i <= num; i++)
    {
        inr = inr * 10 + 1;  
        sum += inr;  
        
        
        if (i == num)
            printf("%d", inr);
        else
            printf("%d + ", inr);
    }
    
    printf("\nThe Sum is : %d\n", sum);
    
return 0;
}
#include<stdio.h>
int main()
{
    int arr [6]={4,5,6,7,8,9};
    int brr[6];
    printf("Enter the reverse number:\n");
    for(int i=0;i<=5;i++){
        brr[i] = arr[5-i];
    }
    for(int i=0;i<=5;i++){
        printf("%d ",brr[i]);
        
    }
    return 0;
}
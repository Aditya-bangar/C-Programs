#include<stdio.h>
int main()
{
    int arr[8]={-55,-54,-19,-29,-1,-6,-29};
    int mini = arr[0];
    for(int i=0;i<=6;i++){
        if(mini>arr[i]){
          mini = arr[i];
        }
    }
    printf("Minimum Number:\n");
    printf("%d",mini);
    return 0;


}
#include<stdio.h>
int main()
{
    int arr[8]={-55,-54,-19,-29,-1,-6,-29};
    int max = arr[0];
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
          max = arr[i];
        }
    }
    printf("Maximum Number:\n");
    printf("%d",max);
    return 0;


}
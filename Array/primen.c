#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6,7,11},i,c=0;
    printf("Prime Number : ");

    for(i=0;i<8;i++){
        c=0;
        for(int j=1 ; j<num[i];j++){
            if(num[i]%j==0){
                c++;
            }
        }
        if(c==1){
        printf("%d",num[i]);
    }
    }
    
    return 0;
}
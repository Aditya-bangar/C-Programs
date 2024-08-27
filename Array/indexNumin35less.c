#include<stdio.h>
int main(){
    int marks[10]={10,55,78,20,36,66,87,69,12,11};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
        printf("\nLess of 35 index nu in marks:=");
        printf("%d ",i);
        }
    }
    return 0;
}
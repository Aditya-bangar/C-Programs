#include <stdio.h>

int main() {
    int num[10], arrNum, temp, i, j;

    printf("Enter size of array between 1-10: ");
    scanf("%d", &arrNum);

    printf("Enter %d elements: ", arrNum);
    for(i = 0; i < arrNum; i++) {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < arrNum - 1; i++) {
        for(j = i + 1; j < arrNum; j++) {
            if(num[i] < num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nArray elements in descending order:\n");
    for(i = 0; i < arrNum; i++) {
        printf("%d ", num[i]);
    }
return 0;
}
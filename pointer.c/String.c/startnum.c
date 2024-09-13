#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int startIndex, endIndex;
    int i;
    printf("Enter a String: ");
    gets(str);  

    printf("Enter the starting index number: ");
    scanf("%d", &startIndex);

    printf("Enter the ending index number: ");
    scanf("%d", &endIndex);


    for (i = 0; str[i] != '\0'; i++);     
    if (startIndex < 0 || endIndex >= i || startIndex > endIndex) {
        printf("Index is not available.\n");
        return 1;
    }


    for (i = startIndex; i <= endIndex; i++) {
        str[i] = toupper(str[i]);
    }


    printf("Resulting String is: %s\n", str);

    return 0;

}
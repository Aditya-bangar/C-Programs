

#include <stdio.h>

int main() {
    int books = 5;
    char bookTitle[5][50];
    char bookAuthor[5][30];
    int bookYear[5];

    printf("Enter book details:\n");
    for (int i = 0; i < books; i++) {
        printf("Book %d Title: ", i + 1);
        scanf("%s", bookTitle[i]);
        printf("Book %d Author: ", i + 1);
        scanf("%s", bookAuthor[i]);
        printf("Book %d Year: ", i + 1);
        scanf("%d", &bookYear[i]);
    }

    printf("Book List:\n");
    for (int i = 0; i < books; i++) {
        printf("%s by %s (%d)\n", bookTitle[i], bookAuthor[i], bookYear[i]);
    }

    return 0;
}

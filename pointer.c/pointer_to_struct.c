#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {1, "Alice", 95.0};
    struct Student *ptr = &student1;

    printf("Student ID: %d\n", ptr->id);
    printf("Student Name: %s\n", ptr->name);
    printf("Student Marks: %.2f\n", ptr->marks);

    return 0;
}
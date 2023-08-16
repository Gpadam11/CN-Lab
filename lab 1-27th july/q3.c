#include <stdio.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[15];
};

int main() {
    struct Student student1;

    struct Student *ptr = &student1;
    printf("Enter Roll Number: ");
    scanf("%d", &(ptr->rollNumber));

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Name: %s\n", ptr->name);

    return 0;
}
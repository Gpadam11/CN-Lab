#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
};

void displayStudents(struct Student students[], int numStudents) {
    printf("List of Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("\n");
    }
}

int main() {
    struct Student students[2];
    strcpy(students[0].name, "Geet");
    students[0].rollNumber = 1;

    strcpy(students[1].name, "Deeksha");
    students[1].rollNumber = 102;

    displayStudents(students, 2);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[30];
    int marks;
};

void addStudent();
void displayStudents();

int main() {
    int choice;

    do {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

void addStudent() {
    FILE *fp;
    struct Student s;
    struct Student *ptr = &s;

    fp = fopen("students.dat", "ab");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    fwrite(ptr, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Student record added successfully.\n");
}

void displayStudents() {
    FILE *fp;
    struct Student s;
    struct Student *ptr = &s;

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    while (fread(ptr, sizeof(struct Student), 1, fp)) {
        printf("%d\t%s\t%d\n",
               ptr->roll,
               ptr->name,
               ptr->marks);
    }

    fclose(fp);
}


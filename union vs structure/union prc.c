#include <stdio.h>
struct StudentStruct {
    int roll;
    float marks;
    char grade;
};

union StudentUnion {
    int roll;
    float marks;
    char grade;
};
int main() {
    struct StudentStruct s;
    union StudentUnion u;
    printf("Structure vs Union Demonstration\n\n");
    s.roll = 1;
    s.marks = 85.5;
    s.grade = 'A';
    printf("STRUCTURE VALUES:\n");
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    u.roll = 1;
    printf("\nUNION VALUES AFTER roll:\n");
    printf("Roll: %d\n", u.roll);
    u.marks = 85.5;
    printf("\nUNION VALUES AFTER marks:\n");
    printf("Marks: %.1f\n", u.marks);
    u.grade = 'A';
    printf("\nUNION VALUES AFTER grade:\n");
    printf("Grade: %c\n", u.grade);
    printf("\nMEMORY SIZE:\n");
    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

}


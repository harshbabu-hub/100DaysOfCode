#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Roll Number: %d, Marks: %.2f\n", 
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
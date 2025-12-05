#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp[3];

    // Input employee data
    for (int i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %[^\n]s", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read from binary file
    struct Employee readEmp[3];
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee Details from file:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", readEmp[i].name, readEmp[i].id, readEmp[i].salary);
    }

    return 0;
}
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Nandini", FEMALE};

    printf("Name: %s\n", p1.name);

    if(p1.gender == MALE)
        printf("Gender: Male\n");
    else if(p1.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}
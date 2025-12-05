#include <stdio.h>

enum Sample {FIRST, SECOND, THIRD = 10, FOURTH};

int main() {
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}
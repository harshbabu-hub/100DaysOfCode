#include <stdio.h>

int main() {
    enum Numbers {
        TEN = 10,
        ELEVEN,
        TWELVE,
        THIRTEEN
    };

    printf("TEN = %d\n", TEN);
    printf("ELEVEN = %d\n", ELEVEN);
    printf("TWELVE = %d\n", TWELVE);
    printf("THIRTEEN = %d\n", THIRTEEN);

    return 0;
}
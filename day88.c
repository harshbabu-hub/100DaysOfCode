#include <stdio.h>

int main() {
    enum Numbers {
        TEN = 10,
        ELEVEN,
        TWELVE,
        THIRTEEN,
        COUNT // helper to get number of elements
    };

    const char *names[] = {"TEN", "ELEVEN", "TWELVE", "THIRTEEN"};

    for(int i = 0; i < COUNT; i++) {
        printf("%s = %d\n", names[i], TEN + i);
    }

    return 0;
}
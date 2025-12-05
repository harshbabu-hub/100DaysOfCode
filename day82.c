#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight light;

    for (light = RED; light <= GREEN; light++) {
        switch(light) {
            case RED:
                printf("RED: Stop\n");
                break;
            case YELLOW:
                printf("YELLOW: Wait\n");
                break;
            case GREEN:
                printf("GREEN: Go\n");
                break;
        }
    }

    return 0;
}
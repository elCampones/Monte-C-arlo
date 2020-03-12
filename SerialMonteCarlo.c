#include "MonteCarlo.c"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: SerialMonteCarlo numberIterations\n");
        exit(1);
    }
    int iterations = atoi(argv[1]);
    float percentageInside = 
        (float)numberInsideCircle(iterations, rand()) / (float)iterations;
    float pi = percentageInside * 4;
    printf("Pi: %f\n", pi);
    return 0;
}
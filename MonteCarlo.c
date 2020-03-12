#include <stdlib.h>

float generateRandomFloat(int seed) {
    return ((float)rand_r(seed))/((float)RAND_MAX);
}

int numberInsideCircle(int maxIterations, int seed){
    int accum = 0;
    for (int i = maxIterations; i > 0; i--) {
        int xPos = generateRandomFloat(seed);
        int yPos = generateRandomFloat(seed);
        if (xPos * xPos + yPos * yPos <= 1)
            accum++;
    }
    return accum;
}
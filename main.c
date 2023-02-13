#include <stdio.h>
#include "squareRoot.h"

int main(int argc, char **argv)
{
    // Main program.
    float value = 5;
    float square = squareRoot(value);
    printf("%f = sqrtf(%f)\n", square, value);
}

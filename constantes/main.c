#include <stdio.h>
#include <stdlib.h>

#define PIZACOST 1.5
const char NEWLINE = '\n';

int main()
{
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZACOST * numberOfSlices;

    printf("Total bill: %c %f", NEWLINE, costoPizzas);


    return 0;
}

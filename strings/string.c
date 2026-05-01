#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char minhaStringDouble[4] = "2.3";
    double d = atof(minhaStringDouble);
    printf("O dobro de %f resulta em %f\n", d, 2 * d);

    char minhaStringInt[4] = "50";
    int i = atoi(minhaStringInt);
    printf("\ 'A soma de %d com 10 resulta em %d\n", i, i + 10);

    

}
#include <stdio.h>

// A variavel global fica na area da memoria chamada BBS3

int meuinteiroglobal = 200;

void meuprocedimento()
{
 printf("%d\n ", meuinteiroglobal);
 //meuinteiroglobal = meuinteiroglobal+1;
 meuinteiroglobal++;
}

int main()
{
    meuprocedimento();
    printf("%d\n", meuinteiroglobal);
}

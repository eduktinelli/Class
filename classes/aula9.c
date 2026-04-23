#include <stdio.h>
#define TAM 5

int main()
{
    int vector[TAM], posicao;

    for (posicao = 0; posicao < TAM; posicao++)
    {
        printf("Posicao %d do vetor:  \n", posicao);
        scanf("%d", &vector[posicao]);
    }

    printf("\n\n");

    for(posicao = TAM-1; posicao >= 0; posicao--)
    {
            printf("a posicao: %d e valor %d\n", posicao, vector[posicao]);
    }

    return 0;
    
}

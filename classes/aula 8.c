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

    for(posicao = 0; posicao < TAM; posicao++)
    {
        if (vector[posicao] % 2 == 0)
        {
            printf("a posicao: %d e par o valor %d\n", posicao, vector[posicao]);
        }
        
    }

    return 0;
    
}

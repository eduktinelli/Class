#include <stdio.h>


 int primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, soma;

int main()
{
    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: \n");
    scanf("%d", &segundoNumero);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &terceiroNumero);

    printf("Digite o quarto numero: \n");
    scanf("%d", &quartoNumero);

    if(primeiroNumero > segundoNumero && primeiroNumero > terceiroNumero && primeiroNumero > quartoNumero)
    {
        soma = segundoNumero + terceiroNumero + quartoNumero;
        printf("Seu maior numero e o primeiro \n");
    }
    else if(segundoNumero > primeiroNumero && segundoNumero > terceiroNumero && segundoNumero > quartoNumero)
    {
        soma = primeiroNumero + terceiroNumero + quartoNumero;
        printf("Seu maior numero e o segundo \n");
    }
    else if(terceiroNumero > primeiroNumero && terceiroNumero > segundoNumero && primeiroNumero > quartoNumero)
    {
        soma = primeiroNumero + segundoNumero + quartoNumero;
        printf("Seu maior numero e o terceiro \n");
    }
    else if(quartoNumero > primeiroNumero && quartoNumero > segundoNumero && quartoNumero > terceiroNumero)
    {
        soma = primeiroNumero + segundoNumero + terceiroNumero;
        printf("Seu maior numero e o quarto \n");
    }
    printf("resultado e %d", soma);

    return 0;
}
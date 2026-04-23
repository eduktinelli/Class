#include <stdio.h>

int numero;


int main()
{
    printf("Digite um numero:  ");
    scanf("%d", &numero);

    if(numero % 3 == 0 && numero % 5 == 0)
    {
        printf("Seu numero e divisivel por 3 e 5");
    }
    else
    {
        printf("Seu numero nao e divisivel por 3 e 5");
    }

    return 0;
}

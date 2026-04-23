#include <stdio.h>

void procedimento()
{
    printf("Opcao 2\n");
}

int main()
{
    int numero;

    while (numero != 99)
    {
    
    printf("Digite um numero:  ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("opcao 1\n");
        break;

    case 2:
        procedimento();
        break;
    default:
       printf("Digita o numero certo PORRA\n");
        break;
    }
}
    return 0;
}
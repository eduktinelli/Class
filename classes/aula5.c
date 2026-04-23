#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, numero2 = 0;

    for (numero=10; numero>0; numero--)
    {
        printf("Estou no for loop %d\n", numero);
    }

    printf("\n");
    printf("Tecle qualquer tecla...");
    getchar();

    while (numero2<=10)
    {
        printf("Estou no while loop %d\n", numero2);
        numero2++;
    
    }    

    return 0;
}
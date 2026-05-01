#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    printf("Digite seu nome completo:");
    fgets(nome, 30, stdin); // le ate 28 caracteres  ;
    nome[strcspn(nome, "\n")] = '\0';
    printf("Ola, %s\n", nome);
    return 0;
}
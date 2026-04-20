#include <stdio.h>
#include "equacaoPrimeiro.h"

void menu(void)
// adiciono a função de menu 
{
    int opcao = 0;

    while (opcao != 4) {
        //descreve o menu para o usuario
        printf("==============================================\n");
        printf("  Resolucao de Equacoes do 1o e 2o Grau\n");
        printf("==============================================\n");
        printf("1. Equacao do 1o grau (ax + b = 0)\n");
        printf("2. Equacao do 2o grau (ax^2 + bx + c = 0)\n");
        printf("3. Sobre o Programa\n");
        printf("4. Sair\n");
        printf("==============================================\n");
        //o usuaria deve adicinar uma opcao entre 4 caso ele escreva outra coisa o comando defaut do switch retorna ele e diz que a opcao esta incorreta
        printf("Escolha uma opcao (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            //o programa puxa a funcao do calculo de primeiro grau da biblioteca padrao equacaoPrimeiro.h
                equacaoPrimeiro();
                break;
            case 2:
                //implementar funcao de 2 grau
                break;
            case 3:
                printf("Desenvolvido por Eduardo Tinelli, Joao Eduardo, Kaue Paulino\n");
                break;
            case 4:
                printf("Encerrando o programa. Obrigado!\n");
                break; 
            default:
                printf("Opcao invalida. Tente novamente.\n\n");
                break;
        }
    }
}
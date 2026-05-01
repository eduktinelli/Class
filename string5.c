#include <stdio.h>

int main()
{
    FILE *arquivo = fopen("saida.txt", "w");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    fputs("Texto gravado no arquivo\n", arquivo);
    fclose(arquivo);
    printf("Texto salvo com sucesso\n");
}
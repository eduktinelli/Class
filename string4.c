#include <stdio.h>

int main()
{
  //  char texto[] = "Exemplo com fputs";
    //fputs(texto, stdout); //stdout = tela
   // fputs(texto, texto);



    // ---------

    FILE *arquivo = fopen("saida.txt", "w");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }


    fputs("Texto gravado no arquivo.\n", arquivo);
    fclose(arquivo);
    printf("Texto salvo com sucesso.\n");
    return 0;
}
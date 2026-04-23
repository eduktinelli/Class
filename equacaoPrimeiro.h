void equacaoPrimeiro()
// adiciono a função para realizar o calculo de Primeiro Grau.
{
    //crio as variaveis necessarias
    int a;
    int b;
    int x;

    //solicito os numeros
    printf("\n--- Equacao do Primeiro grau ---\n");
    printf("Digite o a: ");
    scanf("%d", &a);
    printf("Digite o b: ");
    scanf("%d", &b);

    // verifico se o calculo possui solucao
    if (a == 0) {
        if (b == 0) {
            printf("Infinitas solucoes.\n");
        } else {
            printf("Nao ha solucao.\n");
        }
        
    // realizo o calculo depois de verificar se possui solucao
    } else {
        x = -b / a;
        printf("x = %d\n", x);
        //peço para o sistema informar o resultado apenas com ate 4 casas decimais de precisao 
    }

    printf("--- Passo a Passo ---\n");

    if(b < 0) {
        printf("1) Escreva a equacao: (%d) x - (%d) = 0\n", a, -b);
        printf("2) Isole o termo x: (%d) x = (%d)\n", a, -b);
        printf("3) Divida ambos os lados por a: x = (%d) / (%d)\n", -b, a);
        printf("4) Finalize: x = %d\n", x);
    }
    else { 
        printf("1) Escreva a equacao: (%d) x + (%d) = 0\n", a, b);
        printf("2) Isole o termo x: (%d) x = - (%d)\n", a, b);
        printf("3) Divida ambos os lados por a: x = - (%d) / (%d)\n", b, a);
        printf("4) Finalize: x = %d\n", x);
    }
}
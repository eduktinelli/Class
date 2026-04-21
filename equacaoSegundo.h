#include <stdio.h>
#include <math.h>

void equacaoSegundo() {
    int a, b, c, delta, x1, x2, raizDelta;

    printf("\n--- Equacao do Segundo Grau (ax^2 + bx + c = 0) ---\n");
    
    // Leitura dos dados usando %d para inteiros 
    printf("Digite o valor de a: ");
    scanf(" %d", &a);
    printf("Digite o valor de b: ");
    scanf(" %d", &b);
    printf("Digite o valor de c: ");
    scanf(" %d", &c);

    // Validação obrigatória para equações de 2º grau 
    if (a == 0) {
        printf("Erro: 'a' nao pode ser zero.\n");
        return;
    }

    // Passo 1: Cálculo do Discriminante 
    printf("\nPasso 1: Calcular o discriminante (Delta)\n");
    printf("Formula: Delta = b^2 - 4 * a * c\n");
    delta = (b * b) - (4 * a * c);
    printf("Calculo: Delta = (%d)^2 - 4 * (%d) * (%d)\n", b, a, c);
    printf("Resultado: Delta = %d\n", delta);

    if (delta < 0) {
        printf("\nPasso 2: Verificacao de raizes\n");
        printf("Como Delta < 0, a equacao nao possui raizes reais.\n");
    } else {
        // Passo 2: Raiz Quadrada 
        raizDelta = (int)sqrt(delta); 
        printf("\nPasso 2: Raiz quadrada de Delta\n");
        printf("sqrt(%d) = %d\n", delta, raizDelta);

        // Passo 3: Denominador 
        printf("\nPasso 3: Calculo do Denominador (2a)\n");
        printf("2 * %d = %d\n", a, 2 * a);

        // Passo 4: Bhaskara 
        printf("\nPasso 4: Aplicar a Formula de Bhaskara\n");
        
        if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Resultado Final: x = %d\n", x1);
        } else {
            x1 = (-b + raizDelta) / (2 * a);
            x2 = (-b - raizDelta) / (2 * a);
            
            printf("Calculo de x1: (-%d + %d) / %d\n", b, raizDelta, 2 * a);
            printf("x1 = %d\n", x1);
            
            printf("Calculo de x2: (-%d - %d) / %d\n", b, raizDelta, 2 * a);
            printf("x2 = %d\n", x2);
            
            printf("\nSolucoes reais: x1 = %d e x2 = %d\n", x1, x2);
        }
    }
}

#include <stdio.h>
void meuMetodoEstatico()
{
    static int minhaIdade = 45;
    printf("%d\n", minhaIdade);
    minhaIdade++;
}

int main()
{
    meuMetodoEstatico();
    meuMetodoEstatico();
    meuMetodoEstatico();
    return 0;
}

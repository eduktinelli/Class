#include "stdio.h"
#include <stdlib.h>
#include "locale.h"

int main()
{
 setlocale(LC_ALL, "portuguese");
 setlocale(LC_CTYPE, "pt_BR.UTF-8"); //DEFINE O PADRAO BRASILEIRO
  printf("Parabéns por Estudar a Linguagem C");
  return 0;

}

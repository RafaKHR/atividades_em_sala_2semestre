#include <stdio.h>
#include <locale.h>
int main()
{
setlocale (LC_ALL,"portuguese");
char letra = 'E';
int numero = 35;
char matriz[10] = "estruturaDeDados";
float numeroDecimal = 87.8;
printf("Endere�o de mem�ria das vari�veis\n\n");
printf("O valor da vari�vel letra � %c e seu endere�o � %x\n",letra,&letra);
printf("O valor da vari�vel numero � %d e seu endere�o � %x\n",numero,&numero);
printf("O valor da vari�vel matriz � %s e seu endere�o � %x\n",matriz,matriz);
printf("O valor da vari�vel numeroDecimal � %2.1f e seu endere�o � %x\n",numeroDecimal,&numeroDecimal);
}

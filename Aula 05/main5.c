#include <stdio.h>
#include <locale.h>
int main()
{
setlocale (LC_ALL,"portuguese");
char matriz[10] = "palavra";
// informar o tamanho em bytes de um determinado tipo de variavel;
printf("Tamanho de um short int(int) � %d bytes\n", sizeof(short int));
printf("Tamanho de um long int(float) � %d bytes\n", sizeof(long int));
printf("Tamanho de um char � %d bytes\n", sizeof(char));
printf("Tamanho de um vetor de char com 10 posi��es � %d� bytes\n", sizeof(matriz));
}

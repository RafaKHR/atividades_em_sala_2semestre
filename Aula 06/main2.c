#include <stdio.h>
#include <locale.h>
int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	char matriz[10] = "palavra";
	
	printf("Tamanho de um int short �: %d bytes\n", sizeof(short int));
	printf("Tamanho de um int long �: %d bytes\n", sizeof(long int));
	printf("Tamanho de um char �: %d bytes\n", sizeof(char));
	printf("Tamanho de um vetor de char com 10 posi��es �: %d bytes\n", sizeof(matriz));
}

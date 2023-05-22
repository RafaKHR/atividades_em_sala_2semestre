/* #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 

main(){
	system("color 5e");
	int k;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &k);
	printf("Valor digitado %d \n", k);
	printf("O endereço de k = %x ", &k);
	
}
*/

#include <stdio.h>
#include <locale.h>
int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	char matriz[10] = "palavra";
	
	printf("Tamanho de um int short é: %d bytes\n", sizeof(short int));
	printf("Tamanho de um int long é: %d bytes\n", sizeof(long int));
	printf("Tamanho de um char é: %d bytes\n", sizeof(char));
	printf("Tamanho de um vetor de char com 10 posições é: %d bytes\n", sizeof(matriz));
}

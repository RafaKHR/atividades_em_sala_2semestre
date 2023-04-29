#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dados de entrada dois valores
e mostre como resultado as 4 operações matematicas. */

main() {
	int valor1, valor2;
	system("color e5");
	printf("Digite o valor e tecle enter ");
	scanf("%d", &valor1);
	printf("Digite outro valor e tecle enter ");
	scanf("%d", &valor2);
	system("color 5e");
	printf("\n Soma = %d", valor1+valor2);
	printf("\n Subtracao = %d", valor1-valor2);
	printf("\n Multiplicacao = %d", valor1*valor2);
	printf("\n Divisao = %d", valor1/valor2);
}

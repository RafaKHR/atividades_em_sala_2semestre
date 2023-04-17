#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada 5 numeros inteiros, e mostre como resultado:
a) A lista dos numeros digitados;
b) A media dos numeros digitados;
Obs: utilizar no maximo 2 varaveis e 1 vetor. */

int main(){
	int cont;
	float valor[5], soma;
	system("color e5");
	for(cont=0; cont<5; cont++){
		printf("Digite o valor desejado: ");
		scanf("%f", &valor[cont]);
	}
	for(cont=0; cont<5; cont++){
		printf("\n %f", valor[cont]);
		soma += valor[cont];
	}
		printf("\nA media dos 5 valores eh: %.2f", soma/cont);
	return 0;
}

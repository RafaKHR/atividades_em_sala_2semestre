#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dados de entrada 5 numeros inteiros
e mostre como resultado o maior numero digitado
Obs: utilizar apenas 3 variaveis */

main() {
	int cont, valor, maior;
	system("color 5e");
	for(cont=0; cont<5; cont++){
		printf("Digite um numero: ");
		scanf("%d", &valor);
			if(valor > maior){
				maior = valor;
			}
		}
	printf("O maior numero eh: %d", maior);
}

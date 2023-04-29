#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dados de entrada um numero inteiro
e mostre se este nmero esta no intervalo entre 10 e 60 inclusive */

main() {
	int valor1;
	system("color e5");
	printf("Digite o valor e tecle enter ");
	scanf("%d", &valor1);
	if(valor1 >= 10 && valor1 <= 60){
			printf("O valor esta no intervalo entre 10 e 60", valor1);
		}else{
			printf("O valor esta fora do intervalo entre 10 e 60", valor1);
		}
	}

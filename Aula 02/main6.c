#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada
um numero inteiro e imprima na tela em ordem decrescente
os valores do numero digitado ate 0
Obs: utilizar apenas 2 variaveis */

main() {
	int cont, valor;
	system("color f2");
	printf("Digite um numero");
	scanf("%d", &valor);
	for(cont=0; cont<=valor; cont++){
		printf("\n %d", valor - cont);
		sleep(1);
		system("cls");
	}
	printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
	printf("Pipoca Pronta !!");
	sleep(1);
}

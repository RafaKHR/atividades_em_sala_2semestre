#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba como dados de entrada
um valor e mostre como resultado o dobro do valor digitado.
*/

main(){
	int valor;
	system("color e5");
	printf("Digite o valor e tecle enter ");
	scanf("%d", &valor);
	system("cls");
	system("color 5e");
	printf("\n O dobro calculado foi %d", valor*2);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dado de entrada 2 números 
e que execute as 4 operações aritméticas usando Ponteiro */

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	int *p1, *p2;
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	p1=&n1;
	p2=&n2;
	printf("Soma = %d", *p1 + *p2);
	printf("\nSubtração = %d", *p1 - *p2);
	printf("\nMultiplicação = %d", *p1 * *p2);
	if(*p2 != 0){
		printf("\nDivisão = %d", *p1 / *p2);
	} 
	else {
		printf("\nDivisão por 0 não existe!!");
	}
	
}

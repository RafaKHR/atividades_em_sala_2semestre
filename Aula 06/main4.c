#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que receba como dado de entrada 2 n�meros 
e que execute as 4 opera��es aritm�ticas usando Ponteiro */

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	int *p1, *p2;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &n2);
	p1=&n1;
	p2=&n2;
	printf("Soma = %d", *p1 + *p2);
	printf("\nSubtra��o = %d", *p1 - *p2);
	printf("\nMultiplica��o = %d", *p1 * *p2);
	if(*p2 != 0){
		printf("\nDivis�o = %d", *p1 / *p2);
	} 
	else {
		printf("\nDivis�o por 0 n�o existe!!");
	}
	
}

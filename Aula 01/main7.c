#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que verifica se um numero digitado 
eh par ou impar. */

main() {
	int valor1;
	system("color e5");
	printf("Digite o valor e tecle enter ");
	scanf("%d", &valor1);
		if(valor1 % 2 == 0){
			system("color 5e");
			printf("\n Numero par = %d", valor1);
		}else{
			system("color f5");
			printf("\n Numero impar %d", valor1);
		}
}

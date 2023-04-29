#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que imprima na tela a tabela ASC 2 */
main() {
	int cont;
	system("color e5");
	for(cont=0; cont<255; cont++){
		printf("\n %d eh o caracter %c", cont, cont);
		sleep(1);
	//	system("cls");
	}
}

#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que imprima na tela
em ordem decrescente os numeros inteiros de 1 a 15
Obs: utilizar apenas 1 variavel*/

main() {
	int cont;
	
	for(cont=0; cont<=15; cont++){
		printf("\n %d", 15 - cont);
		sleep(1);
	//	system("cls");
	}
}

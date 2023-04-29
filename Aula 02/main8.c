#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que imprima na tela o alfabeto
 em Maiusculo e Minusculo */

main() {
	int cont;
	system("color e5");
	for(cont=0; cont<255; cont++){
		if(cont >= 65 && cont <= 90){
			printf("\n %d eh o caracter %c", cont, cont);
		}
		if(cont >= 97 && cont <= 122){
			printf("\n %d eh o caracter %c", cont, cont);
		}	
	}
}

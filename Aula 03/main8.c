#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Elaborar um programa em C que imprima de forma automatica a tabuada
de multiplicação do numero 5 */

main(){
	int cont;
	for(cont=0; cont<=10; cont++){
	textcolor(cont+2);
		printf("\n 5 * %d eh = %d", cont, 5*cont);
		sleep(1);
	}
}

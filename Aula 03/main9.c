#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Elaborar um programa em C que imprima de forma automatica a tabuada
de multiplicação dos numeros de 1 a 5 */

main() {
	int cont, cont2;
	
	for(cont=1; cont<=5; cont++){
	textcolor(cont+2);
		for(cont2=0; cont2<=10; cont2++){
			printf("\n %d * %d eh = %d", cont, cont2, cont2*cont);
			//sleep(1);
		}
		getch();	
	}
}

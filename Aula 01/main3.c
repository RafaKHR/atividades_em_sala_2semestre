#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Faça um programa que imprima na tela 6 numeros inteiros
entre 1 e 60 cada um de uma cor */

main(){
	int i;
	
	// system("color f4");
	printf("Gerando 6 numeros inteiros aleatoriamente: \n\n");
	for(i=0; i<999999; i++){
		gotoxy(rand() % 81, rand() % 24);
		textcolor(rand() % 12);
		printf("%d\n", rand() % 61);
	//	getch();
	}
return 0;
}

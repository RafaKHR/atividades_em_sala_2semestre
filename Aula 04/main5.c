#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dados de entrada 3 palavra
e mostre como resultado quantas letras tem a maior palavra digitada */

void main(void){
	char palavra[51];
	int quantLetras, cont, maiorPalavra;
	
	for(cont=0; cont<3; cont++){
		printf("\nDigite uma palavra: ");
		gets(palavra);
		quantLetras = strlen(palavra);
		if(quantLetras > maiorPalavra){
			maiorPalavra = quantLetras;
		}
		printf("\nPalavra lida foi: %s", palavra);
		
		getch();
	}
		printf("\nA maior palavra tem %d letras", maiorPalavra);
}

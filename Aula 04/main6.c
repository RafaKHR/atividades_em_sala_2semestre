#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dados de entrada 3 palavra
e mostre como resultado quantas letras tem a maior palavra digitada e
a maior palavra digitada seja imprimada */

void main(void){
	char palavra[51];
	char maiorPalavra[51];
	int quantLetras, cont, maiorQuantLetras;
	
	for(cont=0; cont<3; cont++){
		printf("\nDigite uma palavra: ");
		gets(palavra);
		quantLetras = strlen(palavra);
		if(quantLetras > maiorQuantLetras){
			maiorQuantLetras = quantLetras;
			strcpy(maiorPalavra, palavra);
		}
		printf("\nPalavra lida foi: %s", palavra);
		
		getch();
	}
		printf("\nA maior palavra foi %s e tem %d letras", maiorPalavra, maiorQuantLetras);
}

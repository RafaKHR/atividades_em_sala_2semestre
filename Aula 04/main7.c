#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dados de entrada 3 palavra, mostre
como resultado quantas letras tem a maior palavra digitada, a maior palavra
digitada seja imprimida e mostre quantos caracteres foram digitados no total */

void main(void){
	char palavra[51];
	char maiorPalavra[51];
	int quantLetras, cont, maiorQuantLetras, quantCaracDigitados;
	
	for(cont=0; cont<3; cont++){
		printf("\nDigite uma palavra: ");
		gets(palavra);
		quantLetras = strlen(palavra);
		if(quantLetras > maiorQuantLetras){
			maiorQuantLetras = quantLetras;
			strcpy(maiorPalavra, palavra);
		}
		printf("\nPalavra lida foi: %s", palavra);
		quantCaracDigitados += strlen(palavra);
		
		getch();
	}
		printf("\nA maior palavra foi %s e tem %d letras", maiorPalavra, maiorQuantLetras);
		printf("\nA quantidade de caracteres digitados foi de: %d", quantCaracDigitados);
}

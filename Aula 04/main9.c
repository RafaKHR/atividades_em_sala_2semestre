#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dados de entrada 3 palavra, mostre
como resultado quantas letras tem a maior palavra digitada, a maior palavra
digitada seja imprimida, mostre quantos caracteres foram digitados no total
e mostrar as palavras digitadas em uma lista */

void main(void){
	char palavra[3][51];
	char maiorPalavra[51];
	int quantLetras, cont, maiorQuantLetras, quantCaracDigitados;
	
	for(cont=0; cont<3; cont++){
		printf("\nDigite uma palavra: ");
		gets(palavra[cont]);
		quantLetras = strlen(palavra[cont]);
		if(quantLetras > maiorQuantLetras){
			maiorQuantLetras = quantLetras;
			strcpy(maiorPalavra, palavra[cont]);
		}
		printf("\nPalavra lida foi: %s", palavra[cont]);
		printf("\nO nome %s tem %d letras", palavra[cont], quantLetras);
		quantCaracDigitados += strlen(palavra[cont]);
		getch();
		system("cls");
	}
	system("color e4");
	printf("\n Lista de nomes digitados");
	for(cont=0; cont<3; cont++){
		printf("\n %s", palavra[cont]);
	}
		printf("\nA maior palavra foi %s e tem %d letras", maiorPalavra, maiorQuantLetras);
		printf("\nA quantidade de caracteres digitados foi de: %d", quantCaracDigitados);
}

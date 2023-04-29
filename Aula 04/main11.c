#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dado de entrada uma palavra ou frase
e imprima o seu inverso */

int main(){
	char nome[1024];
	int i, tamanho, chave;
	
	printf("Digite uma frase/palavra: ");
	gets(nome);
	printf("Digite uma chave para criptografia: ");
	scanf("%d", &chave);
	tamanho = strlen(nome);
	printf("A string invertida -> ");
	for(i=tamanho-1; i>=0; i--){
		printf("%c", nome[i]+chave);
	}
	getch();
	return 0;
}


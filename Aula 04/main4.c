#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça um programa que receba como dado de entrada uma palavra
e mostre a palavra digitada e quantos caracteres ela possúi */

void main(void){
	char nm[51];
	
	printf("Digite o nome do aluno: ");
	gets(nm);
	printf("O nome do aluno lido foi: %s\n", nm);
	printf("O nome %s tem %d letras!", nm, strlen(nm));
	getch();

}

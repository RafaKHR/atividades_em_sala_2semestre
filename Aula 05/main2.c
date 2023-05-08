#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/* Faça um programa que receba como dados de entrada o nome e o salário de 5 funcionários
ao final mostar:
a) A lista com os nomes e os salários digitados;
b) A media dos salários;
Obs: Utilizar obrigatóriamente struct */

struct lista_func{
	char nome[30];
	float salario;
}lista_info[5];

main(){
	int i;
	float media, soma;
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	
	for(i=0; i<5; i++){
		printf("Digite o nome: ");
		scanf("\n%s", &lista_info[i].nome);
		printf("Digite o salário R$");
		scanf("%f", &lista_info[i].salario);
		soma += lista_info[i].salario;
		media=soma/5;
	}
	for(i=0; i<5; i++){
		printf("\n%s", lista_info[i].nome);
		printf("  %.2f  ", lista_info[i].salario);
}		
	printf("\nA media é de: %.2f\n", media);
	getch();
}


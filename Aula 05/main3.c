#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Faça um programa que receba como dados de entrada o nome e a altura de 5 pessoas 
e mostre como resultado:
a) A lista com os nomes e as alturas digitadas;
b) Qual foi a maior altura digitada e o nome dessa pessoa; */

struct lista_func{
	char nome[30];
	float altura;
}lista_info[5];

main(){
	int i;
	float maior=0;
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	
	for(i=0; i<5; i++){
		printf("Digite o nome: ");
		scanf("\n%s", &lista_info[i].nome);
		printf("Digite a altura: ");
		scanf("%f", &lista_info[i].altura);
		if(maior < lista_info[i].altura){
			maior = lista_info[i].altura;
		}
	}	
	for(i=0; i<5; i++){
		printf("\n%s", lista_info[i].nome);
		printf("  %.2f  ", lista_info[i].altura);
	}		
	printf("A maior altura foi do(a) %s com a altura de %.2f ", lista_info[i].altura, maior);
}

	


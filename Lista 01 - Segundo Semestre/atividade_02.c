#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros
e cresce 3 centímetros por ano. Faça um programa em C que recebendo a altura e o 
crescimento anual de duas pessoas calcule e imprima quantos anos serão necessário para
que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar
mensagem de impossibilidade.
Obs: Encerre a entrada de dados quando for digitada uma valor negativo (não usar
vetores ou matizes) */

main() {
	int ano, cont=1;
	float metro, cresce, metro2, cresce2, aumento=0, aumento2=0;
	setlocale(LC_ALL, "Portuguese");
	
	while(cont!=0){
		printf("Digite o maior tamanho em metros: ");
		scanf("%f", &metro);
		printf("Informe o valor acrescentado por ano: ");
		scanf("%f", &cresce);
		printf("Digite o menor tamanho em metros: ");
		scanf("%f", &metro2);
		printf("Informe o valor acrescentado por ano: ");
		scanf("%f", &cresce2);
	
		while(metro>metro2){
			metro= metro + cresce;
			metro2= metro2 + cresce2;
			ano++;
			if(ano>100){
				printf("A menor pessoa ficar mais alta que a maior pessoa é impossível!");
				break;
			}
		}
		printf("O número de anos necessários é de: %d", ano);
		metro=0;
		metro2=0;
		ano=0;
		printf("\nDeseja calcular novamente? Sim [1], Não [0]: ");
		scanf("%d", &cont);
	}	
}

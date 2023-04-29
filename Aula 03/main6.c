#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Faça um programa que leia a matricula e o sexo de um aluno,
o programa deverá validar o sexo do aluno. Aceitar letra e numeros para
identificar o sexo. Ao final do cadastro, mostre os dados do aluno
e a quantidade de cada tipo
Obs: Utilizar o FOR*/

main(){
	int cont=, matricula, cf=0, cm=0, sx=;
	for(cont=0; cont<5; cont++){
		textcolor(cont+2);
		printf("Digite a matricula: ");
		scanf("%d", &matricula);
		printf("Digite 1 para masculino ou 2 para feminino: ");
		scanf("%d", &sx);
		if(sx == 1){
			cm++;
		}
		if(sx == 2){
			cf++;
		}
	}
	printf("\n Quantidade de homens foi: %d", cm);	
	printf("\n Quantidade de mulheres foi: %d", cf);
}

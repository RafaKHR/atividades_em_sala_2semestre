#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
/* Faça um programa que leia 5 numeros e informe a media dos numeros digitados
Obs: utilizar a estrutura FOR */

main() {
	int cont, num;
	float media;
	
	for(cont=0; cont<5; cont++){
		textcolor(cont+1);
		printf("Digite o numero desejado: ");
		scanf("%d", &num);
	//	media = media + num;
		media+=num;
	}
	printf("A media foi %0.2f", media/5);
}

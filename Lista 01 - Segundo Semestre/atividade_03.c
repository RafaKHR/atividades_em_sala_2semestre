#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que fa�a o sorteio de v�rios n�meros e ao final mostra:
a) A quantidade de n�meros sorteados;
b) O maior n�mero sorteado;
c) Quantos n�meros pares foram sorteados;
Obs: O programa deve finalizar quando for sorteado o valor 0 (zero) e
utilizar no m�ximo 3 vari�veis, n�o utilizar vetores ou matrizes */

main(){
	int cont=1, vezes=0, maior=0, par=0;
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	printf("Sorteando v�rios numeros inteiros: \n\n");
	while(cont!=0){
		cont=rand() % 256;
		printf("%d\n", cont);
		vezes++;
		if(cont>maior){
			maior = cont;
		}
		if(cont % 2 == 0){
			par++;
		}
	}
	printf("\nA quantidade de n�meros que foram sorteados foi de: %d", vezes);
	printf("\nO maior n�mero sorteado foi: %d", maior);
	printf("\nA quantidade de n�meros pares sorteados foi de: %d", par);
}

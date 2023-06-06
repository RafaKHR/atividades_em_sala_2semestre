#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que faça o sorteio de vários números e ao final mostra:
a) A quantidade de números sorteados;
b) O maior número sorteado;
c) Quantos números pares foram sorteados;
Obs: O programa deve finalizar quando for sorteado o valor 0 (zero) e
utilizar no máximo 3 variáveis, não utilizar vetores ou matrizes */

main(){
	int cont=1, vezes=0, maior=0, par=0;
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	printf("Sorteando vários numeros inteiros: \n\n");
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
	printf("\nA quantidade de números que foram sorteados foi de: %d", vezes);
	printf("\nO maior número sorteado foi: %d", maior);
	printf("\nA quantidade de números pares sorteados foi de: %d", par);
}

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <math.h>

/* Utilizando a estrutura de repetição for, faça um programa em C
que leia 10 numeros. Apos a leitura dos numeros, você deverá informar:
a) A soma dos numeros lidos;
b) O maior numero lido;
c) O menor numero lido;
d) A media dos numeros pares;
e) A media dos numeros maiores que 20;
f) A quantidade de numeros pares lidos;
g) A soma dos numeros impares lidos; */

main(){
	int cont, num=0, soma=0, maiorNum=0, menorNum=99999;
	int numPar=0, somaNumImpar=0, numImpar=0, numMaiorVinte;
	float somaVinte=0, somaPar=0;
	
	for(cont=0; cont<10; cont++){
		printf("Digite o numero desejado: ");
		scanf("%d", &num);
		soma+=num;
		if(num > maiorNum){
			maiorNum = num;
		}
		if(num < menorNum){
			menorNum = num;
		}
		if(num % 2 == 0){
			somaPar+=num;
			numPar++;
		}
		if(num > 20){
			somaVinte+=num;
			numMaiorVinte++;
		}
		if(num % 2 == 1){
			somaNumImpar+=num;
		}
}
	printf("Soma dos numeros lidos = %d", soma);
	printf("\nO maior numero digitado eh: %d", maiorNum);
	printf("\nO menor numero digitado eh: %d", menorNum);
	printf("\nA media dos numeros pares eh: %.2f", somaPar / numPar);
	printf("\nA media dos numeros maiores que 20 eh: %.2f", somaVinte / numMaiorVinte);
	printf("\nA quantidade de numeros pares lidos foi: %d", numPar);
	printf("\nA soma dos numeros impares foi: %d", somaNumImpar);
}

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Faça um programa que leia 5 numeros e informe o maior numero
e o menor numero
Obs: utilizar o FOR */

main(){
	int cont, num, maiorNum=0, menorNum=99999999999;

	for(cont=0; cont<5; cont++);
		textcolor(cont+1);
		printf("Digite o numero desejado: ");
		scanf("%d", &num);
		//if(cont == 0){
		//maiorNum=num;
		//menorNum=num
		//}
			if(num > maiorNum){
			maiorNum=num;
			}
			if(num < menorNum){
			menorNum=num;
			}
	printf("O maior numero foi: %d", maiorNum);
	printf("O menor numero foi: %d", menorNum);
}

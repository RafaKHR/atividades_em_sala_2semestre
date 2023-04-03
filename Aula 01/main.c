#include <stdio.h>

/* Faça um programa que receba como dados de entrada numeros inteiros 
e o programa deve finalizar quando for digitado o valor 0(zero) */

main(){
	int controle=1, valor;
	while(controle!=0){
		printf("Digite um numero: ");
		scanf("%d", &valor);
	//	system("cls");
	printf("Digite 1 para continuar \nOu 0 para sair: ");
	scanf("%d", &controle);
	}
}



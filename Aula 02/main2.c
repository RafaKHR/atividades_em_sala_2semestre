#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "resultado.h"

/* Faça um programa que receba como dado de entrada o valor de um serviço
e mostre como resultado, o valor do serviço com 10% de desconto
Obs: utilizar função de um "arquivo.h" */

int main(){
	float servico;
	
	printf("Digite o valor do servico: ");
	scanf("%f", &servico);
	kako(servico);
	return 0;
}

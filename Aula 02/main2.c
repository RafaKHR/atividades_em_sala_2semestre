#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "resultado.h"

/* Fa�a um programa que receba como dado de entrada o valor de um servi�o
e mostre como resultado, o valor do servi�o com 10% de desconto
Obs: utilizar fun��o de um "arquivo.h" */

int main(){
	float servico;
	
	printf("Digite o valor do servico: ");
	scanf("%f", &servico);
	kako(servico);
	return 0;
}

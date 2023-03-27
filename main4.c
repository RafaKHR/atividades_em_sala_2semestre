#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada o valor de cinco vendas e mostre como resultado :
a) Quantas vendas foram maiores que R$ 500,00?
b) Qual foi a media das vendas?
Obs: Utilizar no maximo 4 variaveis e não utilizar vetor */

main(){
	float vendaAtual, mediaVenda;
	int cont, vendaMaiorQ = 0;
	
	for(cont=0; cont<5; cont++){
		printf("Digite o valor da venda feita: ");
		scanf("%f", &vendaAtual);
		if(vendaAtual > 500){
			vendaMaiorQ = vendaMaiorQ + 1;
		}
	}
}

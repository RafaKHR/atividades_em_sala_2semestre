#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que receba como dados de entrada o valor do sal�rio calculando o desconto
de INSS que � de 11% de 5 funcion�rios e mostre como resultado:
a) A lista com os sal�rios e os descontos; 
b) Qual foi o maior sal�rio;
c) A media dos descontos;*/

int main(){
	int cont;
	float salario[5], desconto[5], maiorSalario, mediaSalario, somaSalarioDesconto;
	setlocale(LC_ALL, "Portuguese");
	
	system("color e5");
	for(cont=0; cont<5; cont++){
		printf("Informe o sal�rio recebido: ");
		scanf("%f", &salario[cont]);
		if(maiorSalario < salario[cont]){
			maiorSalario = salario[cont];
		}
	}
	for(cont=0; cont<5; cont++){
		printf("\n%.2f", salario[cont]);
	}
	for(cont=0; cont<5; cont++){
		desconto[cont] = salario[cont] * 0.11;
		desconto[cont] = salario[cont] - desconto[cont];
		printf("\n%.2f", desconto[cont]);
		somaSalarioDesconto += desconto[cont];
		mediaSalario = somaSalarioDesconto / 5;
	}
	printf("\nO maior sal�rio foi de: %.2f", maiorSalario);
	printf("\nA m�dia dos sal�rios � de: %.2f", mediaSalario);
	return 0;
}

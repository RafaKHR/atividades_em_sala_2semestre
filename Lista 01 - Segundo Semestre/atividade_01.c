#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber:
a) Média salarial da população;
b) Média do número de filhos;
c) Maior Salário;
d) Percentual de pessoas com salário até R$ 100,00 
Obs: O final da leitra de daso se dará com a entrada de um salário negativo */

main(){
	float salario, mediaSalario, maiorSalario=0, somaSalario, percentCem;
	int numFilho, mediaFilho, vezes=0, somaFilho=0, vezesSalarioCem;
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Digite o salário recebido: ");
		scanf("%f", &salario);
		if(salario<=0){
			break;
		}
		printf("Informe o número de filhos: ");
		scanf("%d", &numFilho);
		vezes++;
		somaSalario += salario;
		mediaSalario = somaSalario / vezes;
		somaFilho += numFilho;
		mediaFilho = somaFilho / vezes;
		if(salario>maiorSalario){
			maiorSalario = salario;
		}
		if(salario<=100){
			vezesSalarioCem++;
		}
		percentCem = vezesSalarioCem * 100 / vezes;
	} while(salario>0);
	printf("A media do salário da população é de: R$%.2f", mediaSalario);	
	printf("\nA media do número de filhos é de: %d", mediaFilho);
	printf("\nO maior salário é de: R$%.2f", maiorSalario);
	printf("\nO percentual de pessoas com o salário até R$ 100,00 é de: %%%.1f", percentCem);
}

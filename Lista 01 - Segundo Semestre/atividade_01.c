#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o sal�rio e o n�mero de filhos. A prefeitura deseja saber:
a) M�dia salarial da popula��o;
b) M�dia do n�mero de filhos;
c) Maior Sal�rio;
d) Percentual de pessoas com sal�rio at� R$ 100,00 
Obs: O final da leitra de daso se dar� com a entrada de um sal�rio negativo */

main(){
	float salario, mediaSalario, maiorSalario=0, somaSalario, percentCem;
	int numFilho, mediaFilho, vezes=0, somaFilho=0, vezesSalarioCem;
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Digite o sal�rio recebido: ");
		scanf("%f", &salario);
		if(salario<=0){
			break;
		}
		printf("Informe o n�mero de filhos: ");
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
	printf("A media do sal�rio da popula��o � de: R$%.2f", mediaSalario);	
	printf("\nA media do n�mero de filhos � de: %d", mediaFilho);
	printf("\nO maior sal�rio � de: R$%.2f", maiorSalario);
	printf("\nO percentual de pessoas com o sal�rio at� R$ 100,00 � de: %%%.1f", percentCem);
}

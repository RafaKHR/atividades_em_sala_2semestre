#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

struct prof{
	char cod[10];
	char sexo;
	int aula;
	float salario, desconto, final;
}; struct prof prof[5];

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int i, m=0, f=0; 
	float somaM, mediaM, somaF, mediaF;
	
	for(i=0; i<5; i++){
		printf("\n=====================================================\nDigite o código do professor: ");
		scanf("%s", &prof[i].cod);
		fflush(stdin);
		printf("\nDigite o sexo do professor ([M] para masculino, [F] para feminino): ");
		scanf("%c", &prof[i].sexo);
		printf("\nDigite o número de aulas dadas por esse professor no mês: ");
		scanf("%d", &prof[i].aula);
		system("cls");
		prof[i].salario = prof[i].aula * 15;
		if(prof[i].sexo == 'M'){
			somaM += prof[i].salario;
			m++;
			if(prof[i].aula > 70){
				prof[i].desconto = prof[i].salario * 8 / 100;
			} else {
				prof[i].desconto = prof[i].salario * 10 / 100;
			}
		}
		if(prof[i].sexo == 'F'){
			somaF += prof[i].salario;
			f++;
			if(prof[i].aula > 70){
				prof[i].desconto = prof[i].salario * 5 / 100;
			} else {
				prof[i].desconto = prof[i].salario * 7 / 100;
			}
		}
		prof[i].final = prof[i].salario - prof[i].desconto;
	}
	
	mediaM = somaM / m;
	mediaF = somaF / f;
	
	for(i=0; i<5; i++){
		printf("\n=====================================================\nCódigo: %s\nSalário Bruto: %.2f\nDesconto: %.2f\nSalário Líquido: %.2f\n", prof[i].cod, prof[i].salario, prof[i].desconto, prof[i].final);
	}
	
	printf("\nA média aritmética dos salários do sexo masculino: %.2f", mediaM);
	printf("\nA média aritmética dos salários do sexo feminino: %.2f", mediaF);
}


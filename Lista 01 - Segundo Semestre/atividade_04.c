#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que receba como dados de entrada 
duas notas de vários alunos e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A menor media da turma;
c) A media geral da turma;
d) Quantas vezes o programa rodou; 
Obs: O programa deve finalizar quando for digitado o valor 0 (zero)
e utilizar no máximo 6 variáveis, não utilizar vetores ou matrizes*/

main(){
	float nota, nota2, media, menorMedia=9999, mediaTurma, somaTurma;
	int cont=1, maiorSete, vezes;
	setlocale(LC_ALL, "Portuguese");
	
	while(cont!=0){
		printf("Digite a primeira nota: ");
		scanf("%f", &nota);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		media = (nota + nota2) / 2;
		vezes++;
		if(media>=7.0){
			maiorSete++;
		}
		if(media<menorMedia){
			menorMedia = media;
		}
		somaTurma += media;
		printf("A media é de: %.2f", media);
		printf("\nDeseja calcular mais uma vez? \nSim [1] Não [0]: ");
		scanf("%d", &cont);
	}
	mediaTurma = somaTurma / vezes;
	printf("\nO total de alunos com a media maior ou igual a 7,0 é de: %d", maiorSete);
	printf("\nA menor media da turma foi de: %.2f", menorMedia);
	printf("\nA media geral da turma foi de: %.2f", mediaTurma);
	printf("\nO total de vezes que o programa rodou foi de: %d", vezes);
	
}

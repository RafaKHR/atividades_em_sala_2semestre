#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "media.h"

struct aluno{
	char nome[50], matricula[10];
	float n1, n2, media;
}; struct aluno aluno[40];

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int vezes, i;
	
	printf("\n================================================\nQuantos alunos deseja cadastrar?\n");
	scanf("%d", &vezes);
	
	for(i=0; i<vezes; i++){
		printf("\n================================================\nDigite o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		fflush(stdin);
		printf("Digite a mátricula do aluno: ");
		scanf("%s", &aluno[i].matricula);
		printf("Digite a 1° nota do aluno: ");
		scanf("%f", &aluno[i].n1);
		printf("Digite a 2° nota do aluno: ");
		scanf("%f", &aluno[i].n2);	
		aluno[i].media = media(aluno[i].n1, aluno[i].n2);
		printf("================================================\nCadastro realizado com sucesso!");
		system("cls");
	}
		
	
	for(i=0; i<vezes; i++){
		printf("\n================================================\nNome do %d° aluno: %s", i+1, aluno[i].nome);
		printf("\nMatrícula do %d° aluno: %s", i+1, aluno[i].matricula);
		printf("\nMédia do %d° aluno: %.2f", i+1, aluno[i].media);
		printf("\n================================================");
	}
	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

struct aluno{
	char nome[100], mat[10], tel[20], sexo;
	int situacao, freq;
	float n1, n2, media;
}; struct aluno aluno[5];

struct maior_aluno{
	char nome[100], mat[10];
	float media;
}; struct maior_aluno maior_aluno[1];

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	
	int i, aprovado=0, reprovado=0, repFreq, conta, resulRepFreq;
	float maior=0, menor=9999;
	
	for(i=0; i<5; i++){
		printf("\n=====================================================\nDigite o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		fflush(stdin);
		printf("\nDigite a matrícula do aluno: ");
		scanf("%s", &aluno[i].mat);
		printf("\nDigite o telefone do aluno no seguinte formato(9 1111-1111): ");
		scanf("%s", &aluno[i].tel);
		fflush(stdin);
		printf("\nDigite o sexo do aluno no seguinte formato([M] para masculino, [F] para feminino): ");
		scanf("%c", &aluno[i].sexo);
		printf("\nDigite a frequência do aluno nas aulas: ");
		scanf("%d", &aluno[i].freq);
		printf("\nDigite a 1° nota do aluno: ");
		scanf("%f", &aluno[i].n1);
		printf("\nDigite a 2° nota do aluno: ");
		scanf("%f", &aluno[i].n2);
		system("cls");
		aluno[i].media = (aluno[i].n1 + aluno[i].n2) / 2;
		if(aluno[i].media > maior){
			maior = aluno[i].media;
			strcpy(maior_aluno[1].nome, aluno[i].nome);
			strcpy(maior_aluno[1].mat, aluno[i].mat);
			maior_aluno[1].media = aluno[i].media;
		}
		if(aluno[i].media < menor){
			menor = aluno[i].media;
		}
		if(aluno[i].media >= 6.0 && aluno[i].freq >= 60){
			aluno[i].situacao = 1;
			aprovado++;
		} else {
			aluno[i].situacao = 2;
			reprovado++;
		}
		if(aluno[i].freq <=59){
			repFreq++;
		}
		conta = 100 / 5;
		resulRepFreq = conta * repFreq;
	}
	for(i=0; i<5; i++){
		printf("\n=====================================================\nNome: %s\nMatrícula: %s\nFrequência: %d\nMédia Final: %.1f", aluno[i].nome, aluno[i].mat, aluno[i].freq, aluno[i].media);
		if(aluno[i].situacao == 1){
			printf("\nAluno Aprovado!\n");
		} else {
			printf("\nAluno Reprovado!\n");
		}
	}
	printf("\n=====================================================\nA maior média foi de: %.1f\nA menor média foi de: %.1f", maior, menor);
	printf("\nO aluno com a maior média final\nNome: %s\nMatrícula: %s\nMédia Final: %.1f", maior_aluno[1].nome, maior_aluno[1].mat, maior_aluno[1].media);
	printf("\nO total de alunos aprovados é de: %d\nO total de alunos reprovados é de: %d", aprovado, reprovado);
	printf("\nA porcentagem de alunos que reprovaram por frequência é de: %d%%", resulRepFreq);
}

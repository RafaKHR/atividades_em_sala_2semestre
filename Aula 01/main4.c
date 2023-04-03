#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia duas notas de varios alunos e mostre como resultado:
a) Qual foi a maior media obtida?
b) Quantos alunos tiveram media maior ou igual a 7? */

main() {
	int i=1, mediaMelhorSete=0;
	float nota1=0, nota2=0, media=0, maiorMedia=0;
	
	system("color f5");
	while(i!=0){
		printf("Digite a duas notas recebidas: ");
		scanf("%f%f", &nota1, &nota2);
		media = (nota1 + nota2) / 2;
		if(media >= 7){
			mediaMelhorSete++;
		}
		if(media > maiorMedia){
			maiorMedia = media;
		}
	printf("Para continuar, digite (1)\nPara parar, digite (0): ");
	scanf("%d", &i);
	}
	printf("A maior media foi: %.2f", maiorMedia);
	printf("\nA quantidade de alunos com media maior que 7 eh: %d", mediaMelhorSete);
}

#include <stdio.h>
#include <stdlib.h>


/*  */

void main(void){
	char nm[51];
	
	printf("Digite o nome do aluno: ");
	gets(nm);
	printf("O nome lido foi: %s", nm);
	getch();
}


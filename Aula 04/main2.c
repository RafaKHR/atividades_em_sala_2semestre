#include <stdio.h>
#include <string.h>

void main (void){
	char nome[3][10];
	int i;
	
	for(i=0; i<3; i++){
		printf("Digite o nome do funcionario (%d)\n", i+1);
		gets(nome[i]);
	}
	printf("Sequencial nome \n");
	for(i=0; i<3; i++){
		printf("%10d   %s\n", i+1, nome[i]);
	}
}

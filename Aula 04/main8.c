#include <stdio.h>
#include <stdlib.h>

void main(void){
	char nome[20][80];
	int i, nfunc=0;
	
	while(1){
		printf("Digite o nome do funcionario (%d) \n", nfunc+1);
		gets(nome[nfunc]);
		if(strlen(nome[nfunc]) == 0) break;
		nfunc++;
	}
	
	printf("Sequencial nome \n");
	for(i=0; i<nfunc; i++){
		printf("%10d   %s\n", i+1, nome[i]);
	}
}

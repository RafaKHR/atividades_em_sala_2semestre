#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista_func{
	char nome[30];
	int idade;
}lista_info[3];

main(){
	int i;
for(i=0; i<3; i++){
	printf("\nDigite o nome: ");
	scanf("%s", &lista_info[i]. nome);
	printf("\nDigite a idade: ");
	scanf("%d", &lista_info[i]. idade);
}
for(i=0; i<3; i++){
printf("\n %s", lista_info[i]. nome);
printf("  %d  ", lista_info[i]. idade);
}
system("pause");
}

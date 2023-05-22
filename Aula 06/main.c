 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 

main(){
	system("color 5e");
	int k;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &k);
	printf("Valor digitado %d \n", k);
	printf("O endereço de k = %x ", &k);
	
}

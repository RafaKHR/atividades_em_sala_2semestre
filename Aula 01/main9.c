#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dados de entrada 3 numeros inteiros
e mostre como resultado qual o maior numero digitado */
// porta logica implicita
main() {
	int n1, n2, n3;
	system("color e5");
	printf("Digite o primeiro valor e tecle enter ");
	scanf("%d", &n1);
	printf("Digite o segundo valor e tecle enter ");
	scanf("%d", &n2);
	printf("Digite o terceiro valor e tecle enter ");
	scanf("%d", &n3);
		if(n1 > n2){
			if(n1 > n3){
				printf("n1 foi o maior valor digitado %d", n1);
			}
		}
		if(n2 > n1){
			if(n2 > n3){
				printf("n2 foi o maior valor digitado %d", n2);
			}
		}
		if(n3 > n1){
			if(n3 > n2){
				printf("n3 foi o maior valor digitado %d", n3);
			}
		}
	
}

#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada 5 numeros inteiros e responda: 
a) A lista com os numeros digitados;
b) A lista com os numeros pares digitados;
c) A lista dos numeros impares digitados; 
Obs: utilizar 3 listas(vetores) */

int main(){
	int valor[5], cont, par[5], impar[5];
	
	system("color 5e");
	for(cont=0; cont<5; cont++){
		printf("Digite o valor desejado: ");
		scanf("%d", &valor[cont]);
		if(valor[cont] % 2 ==0){
			par[cont] = valor[cont];
		} else par[cont] = 0;
		if(valor[cont] % 2 !=0){
			impar[cont] = valor[cont];
		} else impar[cont] = 0;
	}
	for(cont=0; cont<5; cont++){
		printf("\n %d", valor[cont]); 
	}
	for(cont=0; cont<5; cont++){
		printf("\nOs numeros pares sao: %d", par[cont]);
	}
	for(cont=0; cont<5; cont++){
		printf("\nOs numeros impares sao: %d", impar[cont]);
	}
	return 0;
}

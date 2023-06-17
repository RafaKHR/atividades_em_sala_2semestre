#include <stdio.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
	printf("\nDigite o número desejado: ");
	scanf("%d", v);
	
	if(N == 0){
		*maximo = *v;
		*minimo = *v;
	}
	if(*v < *minimo){
		*minimo = *v;
	}
	if(*v > *maximo){
		*maximo = *v;
	}
}

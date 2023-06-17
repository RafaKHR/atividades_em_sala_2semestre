#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "func.h"

int main(void){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int i, vetor[5], *v[5], maximo, *max, minimo, *min;
	max = &maximo;
	min = &minimo;
	
	for(i=0; i<5; i++){
		vetor[i] = &v[i];
	}
	
	printf("\n===================================\n");
	
	for(i=0; i<5; i++){
		maximoMinimo(v, i, max, min);
	}
	
	printf("\n===================================\nO menor número é: %d\nO maior número é: %d", *min, *max);
	printf("\n===================================");
	return 0;
}

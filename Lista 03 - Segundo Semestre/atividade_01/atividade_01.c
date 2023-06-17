#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "func.h"

int main(){ 
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int vezes, i, *v, min, max;
	
	printf("\n=====================================================\nQuantos números deseja que sejam digitados? "); 
	scanf("%d", &vezes); 
	v = malloc(vezes * sizeof(int)); 
	for(i=0; i<vezes; i++){ 
	printf("\nDigite o %d° número: ", i+1); 
	scanf("%d", &v[i]);
}

mm(v, vezes, &min, &max);

printf("\n=====================================================\nMínimo: %d \nMáximo: %d", min, max); 
printf("\n=====================================================");

return 0;
}

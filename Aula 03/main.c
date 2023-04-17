#include <stdio.h>
#include <stdlib.h>

/*  */

int main(){
	int cont, valor[3];
	
	system("color e5");
	for (cont=0; cont<3; cont++){
		printf("\n Digite o %d valor: ", cont+1);
		scanf("%d", &valor[cont]);
		
	}
	for (cont=0; cont<3; cont++){
	printf("\n %d", valor[cont]);
}
	return 0;
}

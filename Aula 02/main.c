#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

main() {
	int v1, v2;
	textcolor(2);
		printf("Digite o valor 1: ");
		scanf("%d", &v1);
		printf("Digite o valor 2: ");
		scanf("%d", &v2);
		textcolor(11);
		printf("A soma dos valores %d ", v1 + v2);
}

#include <stdio.h>
#include <stdlib.h>

/* Digite 2 valores e calcule a media entre eles.*/

main() {
	float n1, n2;
	system("color e5");
	printf("Digite o primeiro valor e tecle enter ");
	scanf("%f", &n1);
	printf("Digite o segundo valor e tecle enter ");
	scanf("%f", &n2);
	printf("Media = %0.2f ", (n1 + n2) / 2);
}

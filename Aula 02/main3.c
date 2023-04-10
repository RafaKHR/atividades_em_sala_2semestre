#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/* Faça um programa em que o usuario irá escolher uma das 4 operações aritiméticas
e também tera a opção de sair do programa quando digitar 0, ao final, informar:
a) Quantas vezes o programa rodou? */

main(){
	int n1, n2, conta, cont=1, rodada=0;
	do{
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe agora, o tipo de conta que deseja fazer: \n1[+], 2[-], 3[*], 4[/]\n: ");
	scanf("%d", &conta);
	
		switch(conta){
			case 1: somar(n1,n2); break;
			case 2: subtrair(n1,n2); break;
			case 3: multiplicar(n1,n2); break;
			case 4: dividir(n1,n2); break;
		}
	rodada++;
	printf("\nDeseja fazer outra conta ?\nDigite 1 para continuar o programa\nDigite 0 para encerrar o programa\n: ");
	scanf("%d", &cont);
	} while(cont != 0);
	printf("O numero total de rodadas foi: %d", rodada);
}

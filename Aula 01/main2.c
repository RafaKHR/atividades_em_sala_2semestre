#include <stdio.h>

/* Faça um programa que receba como dados de entrada varios numeros inteiros
e mostre como resultado:
a) Quantas vezes o programa rodou?
b) Qual foi o maior numero digitado?
*/

main(){
	int valor, maiorNum=0, cont=1, vezes=0;
	
	system("color 5e");
	while(cont!=0){
		printf("Digite um numero inteiro: ");
		scanf("%d", &valor);
		vezes++;
		if(valor > maiorNum){
		maiorNum = valor;
		}
	printf("Digite 1 para continuar \nOu 0 para parar: ");
	scanf("%d", &cont);
	}
	printf("O programa rodou: %d vezes", vezes);
	printf("\nO maior numero foi: %d", maiorNum);
}

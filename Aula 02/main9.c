#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que seja um simulador de relogio digital */

main(){
	int seg, min, hora;
	system("color 5e");
	for(hora=0; hora<=24; hora++){
		for(min=0; min<60; min++){
			for(seg=0; seg<60; seg++){
			printf("%d : %d : %d", hora, min, seg);
			sleep(1);
			system("cls");
			}
		}
	}
}

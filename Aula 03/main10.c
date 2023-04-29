#include "conio2.h"
#include <stdio.h>
#include <stdlib.h>
/* 
Faça um programa que seja um emulador de despertador*/
main() {
int seg,min,hora;
int segdesp,mindesp,horadesp;

textcolor(3);
printf("Digite a hora para despertar ");scanf("%d",&horadesp);
printf("Digite o minuto para despertar ");scanf("%d",&mindesp);
printf("Digite o segundo para despertar ");scanf("%d",&segdesp);
for(hora=0; hora<=24; hora++){
for(min=0; min<60; min++){
for(seg=0; seg<60; seg++){
printf("%d : %d : %d",hora,min,seg);
if(hora== horadesp && min==mindesp && seg==segdesp){
printf("\a");sleep(1); printf("\a");sleep(1); printf("\a");
}
//sleep(1);
system("cls");
}
}
}
}

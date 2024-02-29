#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Algoritmo:Tabuada.

void()cabecalho{
printf("\n==Tabuada===\n");
system("cls||clear");
}

int main(){
int i,numero;
cabecalho();
printf("\nDigite um número para a tabuada:");
scanf("%i",&numero);


cabecalho();
for(i=1;i<=10;i++){
printf("% d X %d= %d\n",numero,i,numero*i);
}
return 0;

}















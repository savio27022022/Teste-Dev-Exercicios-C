#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void()cabecalho(){
printf("\n===05 números inteiros===");
system("cls||clear");
fflush(stdin);

int main(){
setlocale(LC_ALL," ");

int soma=0,numero;
//Loop para solicitar

cabecalho();
for(int i=0; i<5;i++){
printf("\nDigite o %dº número:",i+1);
scanf("%d",&numero);

//Somar os números digitados.
soma+=numero;
}

//Exibe a soma dos números
cabecalho();
printf("A soma dos números digitados é:%d\n",soma);



return 0;


}

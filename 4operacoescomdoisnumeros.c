#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void(){
printf("\n===Operações com dois números======\n");
system("cls||clear");
fflush(stdin);

int main(){
setlocale(LC_ALL,"");
char primeiroNumero,segundoNumero;
int soma,produto,media;
int menorValor,maiorValor;

//pedidindo os dados ao usuário.

printf("\nDigite o primeiro número:");
scanf("%c",&primeiroNumero);

printf("\nDigite o segundo número:");
scanf("%c",&segundoNumero);

//Calculando os núemeros.
soma=primeiroNumero+segundoNumero;
produto=primeiroNumero*segundoNumero;
media=soma/2.0;


//Verificando  o maior e menor valor.
if(primeiroNumero>segundoNumero){
maiorValor=primeiroNumero;
menorValor=segundoNumero;
}else{
maiorValor=segundoNumero;
menorValor=primeiroNumero;
}

//Exibindo os resultados.

printf("Primeiro número:%i\n\n",primeiroNumero);
printf("Segundo número:%i\n\n",segundoNumero);
printf("soma:%i \n\n",soma);
printf("Produto:%i\n\n",produto);
printf("Média:%i\n\n",media);


if(primeiroNumero==segundoNumero){
printf("\nOs números são iguais.");
}else{
primeiroNumero=maiorValor;
segundoNumero=menorValor;
printf("Maior número:",maiorValor);
printf("Menor valor:",menorValor);
}



























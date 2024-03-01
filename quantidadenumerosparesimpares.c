#include<locale.h>
#include <stdio.h>
#include<stdlib.h>
void cabecalho(){
printf("Quantidade de Números Pares e Ímpares.\n");
system("cls||clear");
fflush(stdin);
}
int main(){
setlocale(LC_ALL,"portuguese");
 int par=0;
 int impar=0;
 int i,numero;
 for(i=1;i<=10;i++)
  {
   printf("\nInforme um número:");
   scanf("%d",&numero);
   
   if(numero%2==0)
  {
  par=par+1;
  }else{
  impar=impar+1;
  }
  printf("\nQuantidade de números pares:%d",pares);
  printf("\nQuantidade de números Ímpares:%d",impar);
return 0;
}

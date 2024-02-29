#include<locale.h>
#include<stdlib.h>
#include<stdio.h>

void()cabecalho(){
printf("Registro Fgets/Gets");
system("cls||clear");
fflush(stdin);
}

int main(){

 char nome[200];
 int idade;
 printf("Digite seu nome:");
 //scanf("%s",&nome);
 //gets(nome);
 fgets(nome,5,stdin);
 //gets(nome);
 
 printf("Digite o sua idade:");
 scanf("%i",&idade);
 
 printf("Nome:%s\n",nome);
 printf("Idade:%i\n",idade);

return 0;
}


















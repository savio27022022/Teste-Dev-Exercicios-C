include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TAM 50
void cabecalho(){
printf("\n====Estrutura de dados em C[struct].=====\n");
system("cls||clear");
fflush(stdin);

struct tipo_pessoa{
int idade;
float peso;
char nome[TAM];

};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
setlocale(LC_ALL,"Portuguese"); 

//Criando  inicializando
tipo_pessoa pes ={0,0.0,"Teste}";
printf("Início:%d\n",);
printf("pes.idade:",pes.idade);
printf("pes.peso:%2.f",pes.peso);
printf("pes.nome:%s\n",pes.nome);

//Atribuindo valores aos campos.
pes.idade=10;
pes.peso=101.99;
strcpy(pes.nome,"Texto");


printf("\nAlterando os campos via código:\n");
printf("pes.idade:%d\n",pes.idade);
printf("pes.peso:%2.f\n",pes.peso);
printf("pes.nome:%s\n",pes.nome);


//Solicitando as inserções no teclado.
printf("\nInsira um número inteiro:");
scanf("%d",&pes.idade);

printf("\nInsira um número real:\n");
scanf("%f",&pes.peso);
fflush(stdin);

printf("\nInsira uma palavra:\n");
scanf("%s",&pes.nome);

printf("\nAlterando com os dados do Usuário:");
printf("pes.idade:%d\n",pes.idade);
printf("pes.peso:%2.f\n",pes.peso);
printf("pes.nome:%s\n",pes.nome);
}

return 0;
}

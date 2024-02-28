#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void cabecalho(){
printf("\n==== SENAI=====\n");
system("cls||clear");
fflush(stdin);
}
int main(){
//Decalração de variáveis.
setlocale(LC_ALL,"portuguese");
char nome[200];
int idade;
float primeiraNota,segundaNota,terceiraNota,media;
//Solicitar os dados ao Usuário.

cabecalho();
printf("Digite  o seu  nome completo:");
scanf("%s",&nome);

cabecalho();
printf("\nDigite a sua idade:");
scanf("%i",&idade);

cabecalho();
printf("\nDigite a sua 1º nota:");
scanf("%f",&primeiraNota);

printf("\nDigite a sua 2º nota:");
scanf("%f",&segundaNota);

printf("\nDigite sua 3º nota:");
scanf("%f",&terceiraNota);
//Calculando a média.
cabecalho();
media=(primeiraNota+segundaNota+terceiraNota)/3;
//Calculando se a pessoa está aprovado(a) ou não.

cabecalho();
if(media<7){
printf("\nSituação do Aluno:Reprovado(a).");
}else{
printf("\nSituação do Aluno:Aprovado(a).");
}

//Exibindo os dados.
cabecalho();
printf("\n==Exibir os Resultados=====\n");
printf("Nome:%s\n\n",nome);
printf("Idade:%i\n\n",idade);
printf("primeira nota:%1.f\n\n",primeiraNota);
printf("segunda nota:%1.f\n\n",segundaNota);
printf("terceira nota:%1.f\n\n",terceiraNota);
printf("Média:%f",media);
return 0;

}

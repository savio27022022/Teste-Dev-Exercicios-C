
/correção login e senha.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

void(){
printf("\n===Login e Senha======\n");
system("cls||clear");
fflush(stdin);

int main(){
setlocale(LC_ALL,"");
//Decalrando ao
char login[200],senha[200];
char loginCadastrado[200]="Maria",senhaCadastrada[200]="1234";
cabecalho();
printf("\nDigite o login do Usuário:");
scanf("%s",&login);

cabecalho();
printf("\nDigite a senha do Usuário:");
scanf("%s",&senha);

//Verificando acesso e exibindo resultados.
cabecalho();
//if(login== loginCadastrado&& senha== senhaCadastrada){
if(strcmp(login,loginCadastrado)==0 && strcmp(senha,senhaCadastrada)==0){
printf("\nBem-Vindo.!");
}else{
printf("\nAcesso Negado.")
}

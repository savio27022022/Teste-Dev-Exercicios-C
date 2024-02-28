#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void cabecalho(){
printf("\n==== SENAI=====\n");
system("cls||clear");
fflush(stdin);
}
int main(){
setlocale(LC_ALL,"portuguese");
//Declaração das variáveis.
char emailCadastrado[200]="saviosantos98266@gmail.com";
char senhaCadastrada[200]="1234567890";
char emailUsuario[200];
char senhaUsuario[200];


//Solicite os dados ao Usúario.
cabecalho();
printf("\nDigite o email do Usuário:");
scanf("%s",&emailUsuario);

cabecalho();
printf("\nDigite a senha do Usuário:");
scanf("%s",&senhaUsuario);
//Definindo se as informações do usuário são válidas ou não e dando os resultaodos.
cabecalho();
if(strcmp(emailCadastrado"saviosantos98266@hotmail.com",emailUsuario" ")==0 &&
 strcmp(senhaCadastrada"1234567890",senhaUsuario" ")=0){
cabecalho();
printf("\nSeja Bem-Vindo(a):");
}else{
cabecalho();
printf("\nUsuário e Senha Inválidos");
}
return 0;
}

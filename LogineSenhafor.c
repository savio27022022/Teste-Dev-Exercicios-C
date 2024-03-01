#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void cabecalho(){
printf("\n====Login e Senha=====\n");
system("cls||clear");
fflush(stdin);
}
int main(){
setlocale(LC_ALL,"portuguese");
//Declaração das variáveis.
char loginCadastrado[200]="savio01";
char senhaCadastrada[200]="1234";
char login[200];
char senha[200];


//Solicite os dados ao Usúario.
cabecalho();
printf("\nDigite o login do Usuário:");
scanf("%s",&login);

cabecalho();
printf("\nDigite a senha do Usuário:");
scanf("%s",&senha);
//Definindo se as informações do usuário são válidas ou não e dando os resultaodos.
cabecalho();
 if(strcmp(login,loginCadastrado)==0 &&
 strcmp(senha,senhaCadastrada)==0){
cabecalho();
printf("\nSeja Bem-Vindo(a):");
}else{
cabecalho();
printf("\nUsuário e Senha Inválidos");
}
return 0;
}

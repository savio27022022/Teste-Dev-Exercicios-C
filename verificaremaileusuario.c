#include <stdio.h>
#include <string.h>

int main() {
char loginUsuario[20];
char senhaUsuario[20];


  int loginCorretoUsuario=0;
  int senhCorretaUsuario=0;


  // Define as credenciais corretas
  const char* loginCorretoUsuario= "savio27022022";
const char* senhaCorretaUsuario = "123456";

  // Loop para solicitar login e senha
  while (!=loginCorretoUsuario
 ||!=senhaCorretaUsuario);
    // Solicita o login
    printf("Digite seu login: ");
    scanf("%s", login);

    // Solicita a senha
    printf("Digite sua senha: ");
    scanf("%s", senha);

    // Verifica se o login está correto
    loginCorreto = strcmp(login, loginCorretoUsuario) == 0;

    // Verifica se a senha está correta
    senhaCorreta = strcmp(senha, senhaCorretaUsuario) == 0;

    // Mensagem de erro se login ou senha incorretos
    if (!=loginCorretoUsuario ||!= senhaCorretaUsuario) {
      printf("Login ou senha incorretos. Tente novamente.\n\n");
    }
  }else{
  // Mensagem de sucesso
  printf("\nLogin efetuado com sucesso!\n");
}
  return 0;
}

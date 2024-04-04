 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char loginCadastrado[50]="saviosantos2702"
senhaCadastrada[50]="123456";
char loginUsuario[50],
senhaUsuario[50];

  int tentativas = 0;

  while (tentativas < 3) {
    printf("Digite seu login: ");
    scanf("%s", login);

    printf("Digite sua senha: ");
    scanf("%s", senha);

    // Comparar login e senha com os valores corretos
    if (strcmp(loginCadastrado, "loginUsuario") == 0 && strcmp(senhacadastrada, "senhaUsuario") == 0) {
      printf("Login efetuado com sucesso!\n");
      break;
    } else {
      printf("Login ou senha incorretos.\n");
      tentativas++;
    }

    if (tentativas == 3) {
      printf("Número máximo de tentativas excedido.\n");
      printf("Programa finalizado.\n");
    }
  }

  return 0;
}
[16/3 19:29] Sávio: #include <stdio.h>

int main() {
  int numero_secreto = 50; // Número secreto (alterável)
  int palpite;

  // Loop principal do jogo
  while (palpite != numero_secreto) {
    // Solicita um palpite do usuário
    printf("Digite um palpite entre 1 e 100: ");
    scanf("%d", &palpite);

    // Fornece dicas sobre o palpite
    if (palpite > numero_secreto) {
      printf("O número secreto é menor que %d.\n", palpite);
    } else if (palpite < numero_secreto) {
      printf("O número secreto é maior que %d.\n", palpite);
    }
  }

  // Mensagem de vitória
  printf("Parabéns! Você adivinhou o número secreto!\n");

  return 0;
}

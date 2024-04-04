#include <stdio.h>

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

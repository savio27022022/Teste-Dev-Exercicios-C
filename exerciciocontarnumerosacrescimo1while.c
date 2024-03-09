#include <stdio.h>

int main() {
  int n, soma = 0, i = 1;

  // Leitura do número n
  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  // Laço while para somar os números de 1 até n
  while (i <= n) {
    soma += i;
    i++; // Incrementa o contador
  }

  // Exibição da soma
  printf("A soma de todos os números de 1 até %d é: %d\n", n, soma);

  return 0;
}



























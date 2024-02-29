#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
printf("\n== SENAI ==\n");
system("cls||clear");
fflush(stdin);
}


int main() {
setlocale(LC_ALL,"portuguese");
cabecalho();
  int numero;

  // Ler o número do usuário

cabecalho();
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Verificar se o número é par
cabecalho();
  if (numero % 2 == 0) {
    printf("O número %d é par.\n", numero);
  } else {
    cabecalho();
    printf("O número %d é ímpar.\n", numero);
  }

  return 0;
}

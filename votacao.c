#includ<stdio.h>
#include<stdlib.h>
#include<locale.h>
void()cabecalho{

printf("\n=== SENAI =====\n");
system("cls||clear");
}



int main() {
setlocale("LC_ALL,"portugese");
  int idade;

  // Ler a idade do usuário
cabecalho();
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  // Verificar se a pessoa é obrigada a votar
cabecalho();
  if (idade>=18 &&<=65) {
    printf("Você  não é obrigado a votar.\n");
  } else {
   
    printf("Você é obrigado a votar.\n");
  }

  return 0;
}

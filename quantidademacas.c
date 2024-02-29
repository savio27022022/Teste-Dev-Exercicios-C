#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void cabecalho(){
printf("\n=cálculo quantidade  maçãs"=\n");
system(cls||clear");
fflush(stdin);
}
int main() {
setlocale(LC_ALL,"portuguese");

  // Variáveis
  int quantidadeMacas;
  float custoTotal;
  int numeroValido = 0;

  // Leitura da quantidade de maçãs
cabecalho();  
    printf("Digite a quantidade de maçãs compradas (um número inteiro positivo): ");
    scanf("%d", &quantidadeMacas);

    // Validação da entrada.
     cabecalho();
    if (quantidadeMacas < 0) {
      printf("Erro: a quantidade de maçãs não pode ser negativa.\n");
    } else {
      numeroValido = 1;
    }
  }

  // Cálculo do custo total
cabecalho();
  if (quantidadeMacas < 12) {
    custoTotal = quantidadeMacas * 1.30;
  } else {
    custoTotal = quantidadeMacas * 1.00;
  }

  // Exibição do custo total
  printf("O custo total da compra é: R$ %.2f\n", custoTotal);

  return 0;
}























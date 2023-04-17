#include <stdio.h>

int main() {
  float salariobruto, prestacao;

  printf("Digite o valor do salário bruto: ");
  scanf("%f", &salariobruto);

  printf("Digite o valor da prestação: ");
  scanf("%f", &prestacao);

  if (prestacao <= salariobruto * 0.3) {
    printf("Empréstimo concedido.\n");
  } else {
    printf("Empréstimo não concedido.\n");
  }

  return 0;
}


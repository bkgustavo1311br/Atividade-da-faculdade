#include <stdio.h>

int main() {
  float salariobruto, prestacao;

  printf("Digite o valor do sal�rio bruto: ");
  scanf("%f", &salariobruto);

  printf("Digite o valor da presta��o: ");
  scanf("%f", &prestacao);

  if (prestacao <= salariobruto * 0.3) {
    printf("Empr�stimo concedido.\n");
  } else {
    printf("Empr�stimo n�o concedido.\n");
  }

  return 0;
}


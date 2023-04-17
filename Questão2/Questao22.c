#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[50], nota_str[10];
  double nota1, nota2, media;

  printf("Digite o nome do aluno: ");
  scanf("%s", nome);

  printf("Digite a primeira nota: ");
  scanf("%s", nota_str);
  nota1 = strtod(nota_str, NULL);

  printf("Digite a segunda nota: ");
  scanf("%s", nota_str);
  nota2 = strtod(nota_str, NULL);

  media = (nota1 + nota2) / 2;

  printf("A nota do aluno %s é %.2f", nome, media);

  return 0;
}


#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor, area;

    // Ler as diagonais do losango
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    // Calcular a área do losango usando a fórmula
    area = diagonalMaior * diagonalMenor / 2;

    // Exibir o resultado
    printf("A area do losango e: %.2f\n", area);

    return 0;
}
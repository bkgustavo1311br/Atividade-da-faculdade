#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Ler a temperatura em graus Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Calcular a temperatura em graus Celsius usando a fórmula
    celsius = 5 * (fahrenheit - 32) / 9;

    // Exibir o resultado
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;

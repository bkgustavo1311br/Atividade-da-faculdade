#include <stdio.h>

int main() {
    int qtturmaA, qtturmaB, qtturmaC;
    int ausentesA, ausentesB, ausentesC;
    int presentes, ausencia;

    printf("Informe a quantidade total de alunos na turma A: ");
    scanf("%i", &qtturmaA);
    printf("Informe a quantidade de alunos ausentes na turma A: ");
    scanf("%i", &ausentesA);

    printf("Informe a quantidade total de alunos na turma B: ");
    scanf("%i", &qtturmaB);
    printf("Informe a quantidade de alunos ausentes na turma B: ");
    scanf("%i", &ausentesB);

    printf("Informe a quantidade total de alunos na turma C: ");
    scanf("%i", &qtturmaC);
    printf("Informe a quantidade de alunos ausentes na turma C: ");
    scanf("%i", &ausentesC);

    presentes = qtturmaA + qtturmaB + qtturmaC - ausentesA - ausentesB - ausentesC;
    ausencia = 100 - presentes * 100 / (qtturmaA + qtturmaB + qtturmaC);

    printf("\nA presença total de alunos é de: %i %%", 100 - ausencia);
    printf("\nA ausência total de alunos é de: %i %%", ausencia);

    return 0;
}


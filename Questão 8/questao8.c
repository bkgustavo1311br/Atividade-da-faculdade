#include <stdio.h>

int main() {
    char estado[3];
    printf("Digite a sigla do estado: ");
    scanf("%s", estado);
    
    if (estado[0] == 'A' && estado[1] == 'M') {
        printf("Você é Amazonense\n");
    } else if (estado[0] == 'R' && estado[1] == 'J') {
        printf("Você é Carioca\n");
    } else if (estado[0] == 'P' && estado[1] == 'A') {
        printf("Você é Paraense\n");
    } else if (estado[0] == 'A' && estado[1] == 'C') {
        printf("Você é Acreano\n");
    } else {
        printf("Não foi possível identificar o estado\n");
    }
    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    
    printf("Digite as coordenadas do primeiro ponto :.\n ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto :.\n ");
    scanf("%lf %lf", &x2, &y2);

    
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // resultado
    printf("A distancia entre os pontos eh: %lf\n", distancia);

    return 0;
}


#include <stdio.h>

int main() {
    float medidaA;
    float medidaB;
    float medidaC;
    float quadrado;
    float triangulo;
    float trapezio;

    printf("Digite a medida A: ");
    scanf("%f", &medidaA);

    printf("Digite a medida B: ");
    scanf("%f", &medidaB);

    printf("Digite a medida C: ");
    scanf("%f", &medidaC);

    quadrado = medidaA * medidaA;
    printf("AREA DO QUADRADO = %.4f\n", quadrado);

    triangulo = medidaA * medidaB / 2;
    printf("AREA DO TRIANGULO = %.4f\n", triangulo);

    trapezio = (medidaA + medidaB) * medidaC / 2;
    printf("AREA DO TRAPEZIO = %.4f\n", trapezio);

}

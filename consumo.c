#include <stdio.h>

int main() {
    int distancia;
    float combustivel;
    float consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;
    printf("Consumo medio = %.3f", consumo);

}

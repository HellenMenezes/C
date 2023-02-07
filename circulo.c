#include <stdio.h>

int main() {
    float raio;
    float pi = 3.14159;
    float area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = (raio * raio) * pi;
    printf("AREA = %.3f", area);
}

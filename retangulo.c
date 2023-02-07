#include <stdio.h>
#include <math.h>

int main(){
    float base;
    float altura;
    float area;
    float perimetro;
    float diagonal;

    printf("Base do retangulo: ");
    scanf("%f", &base);

    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("AREA = %.4f\n", area);

    perimetro = 2 * (base + altura);
    printf("PERIMETRO = %.4f\n", perimetro);

    diagonal = sqrt(base * base + altura * altura);

    printf("DIAGONAL = %.4f", diagonal);
}

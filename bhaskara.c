#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Coeficiente a: ");
    scanf("%f", &a);

    printf("Coeficiente b: ");
    scanf("%f", &b);

    printf("Coeficiente c: ");
    scanf("%f", &c);

    delta = pow(b,2) - (4 * a * c);

    if (delta <= 0)
    {
        printf("Esta equacao nao possui raizes reais");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4f\n", x1);
        printf("X2 = %.4f", x2);
    }
}

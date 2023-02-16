#include <stdio.h>

int main()
{
    float distancia1;
    float distancia2;
    float distancia3;
    float maior;

    printf("Digite as tres distancias:\n");
    scanf("%f", &distancia1);
    scanf("%f", &distancia2);
    scanf("%f", &distancia3);

    maior = 0;

    if(distancia1 > distancia2 && distancia1 > distancia3)
    {
        maior = distancia1;
    }
    else if(distancia2 > distancia1 && distancia2 > distancia3)
    {
        maior = distancia2;
    }
    else
    {
        maior = distancia3;
    }
    printf("MAIOR DISTANCIA = %.2f", maior);
}

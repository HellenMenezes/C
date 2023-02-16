#include <stdio.h>

int main()
{
    int minutos;
    float valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50;

    if(minutos > 100)
    {
        valor = valor + (minutos - 100) * 2;
    }
    printf("Valor a pagar: %.2f\n", valor);
}

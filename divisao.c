#include <stdio.h>

int main()
{
    int n;
    int numerador;
    int denominador;
    float divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);

        if(denominador == 0)
        {
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else
        {
            divisao = (float) numerador / denominador;
            printf("%.2f\n", divisao);
        }
    }
}

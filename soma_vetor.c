#include <stdio.h>

int main()
{
    int n;
    float soma;
    float media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    float vet[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }
    printf("\n");

    printf("VALORES = ");
    for(int i = 0; i < n; i++)
    {
        printf("%.1f  ", vet[i]);
    }

    soma = 0;

    for(int i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }
    printf("\n");
    printf("SOMA = %.2f\n", soma);
    media = soma / n;
    printf("MEDIA = %.2f\n", media);
}

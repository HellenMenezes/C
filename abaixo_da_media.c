#include <stdio.h>

int main()
{
    int n;
    float soma;
    float media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    float vet[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }

    soma = 0;

    for(int i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }

    media = soma / n;

    printf("\nMEDIA DO VETOR = %.3f\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");

    for(int i = 0; i < n; i++)
    {
        if(vet[i] < media)
        {
            printf("%.1f\n", vet[i]);
        }
    }
}

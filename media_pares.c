#include <stdio.h>

int main()
{
    int n;
    int contPares;
    int somaPares;
    float mediaPares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    contPares = 0;
    somaPares = 0;
    for(int i = 0; i < n; i++)
    {
        if(vet[i] % 2 == 0)
        {
            somaPares = somaPares + vet[i];
            contPares++;
        }
    }

    if(contPares == 0)
    {
        printf("NENHUM NUMERO PAR\n");
    }
    else
    {
        mediaPares = somaPares / contPares;
        printf("MEDIA DOS PARES = %.1f\n", mediaPares);
    }
}

#include <stdio.h>

int main()
{
    int n;
    int quantidadePares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS PARES:\n");

    quantidadePares = 0;
    for(int i = 0; i < n; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("%d  ", vet[i]);
            quantidadePares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", quantidadePares);
}

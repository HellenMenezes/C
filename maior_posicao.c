#include <stdio.h>

int main()
{
    int n;
    int posicao;
    float maiorValor;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    float vet[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }

    maiorValor = vet[0];
    posicao = 0;
    for(int i = 0; i < n; i++)
    {
        if(vet[i] > maiorValor)
        {
            maiorValor = vet[i];
            posicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1f\n", maiorValor);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicao);
}

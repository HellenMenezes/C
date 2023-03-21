#include <stdio.h>

int main()
{
    int n;
    int coelhos;
    int ratos;
    int sapos;
    int total;
    int quantidade;
    char tipo;
    float percentC;
    float percentR;
    float percentS;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    coelhos = 0;
    ratos = 0;
    sapos = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if(tipo == 'C')
        {
            coelhos = coelhos + quantidade;
        }
        else if(tipo == 'R')
        {
            ratos = ratos + quantidade;
        }
        else
        {
            sapos = sapos + quantidade;
        }
    }

    total = coelhos + ratos + sapos;
    percentC = ((float) coelhos / total) * 100.0;
    percentR = ((float) ratos / total) * 100.0;
    percentS = ((float) sapos / total) * 100.0;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f\n", percentC);
	printf("Percentual de ratos: %.2f\n", percentR);
	printf("Percentual de sapos: %.2f\n", percentS);
}

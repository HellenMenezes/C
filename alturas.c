#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int cont;
    float alturaSoma;
    float alturaMedia;
    float porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    float alturas[n];
    alturaSoma = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%f", &alturas[i]);
        alturaSoma = alturaSoma + alturas[i];
    }
    printf("\n");

    alturaMedia = alturaSoma / n;
    printf("Altura media: %.2f\n", alturaMedia);

    cont = 0;
    for(int i = 0; i < n; i++)
    {
        if(idades[i] < 16)
        {
            cont = cont + 1;
        }
    }

    porcentagem = cont * 100 / n;
    printf("Pessoas com menos de 16 anos: %.1f%%\n", porcentagem);

    for(int i = 0; i < n; i++)
    {
        if(idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }
}

#include <stdio.h>

int main()
{
    int n;
    int maisVelho;
    int posicao;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];

    for(int i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        scanf("%s", &nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maisVelho = idades[0];
    posicao = 0;

    for(int i = 0; i < n; i++)
    {
        if(idades[i] > maisVelho)
        {
            maisVelho = idades[i];
            posicao = i;
        }
    }
    printf("PESSOA MAIS VELHA: %s\n", nomes[posicao]);
}

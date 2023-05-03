#include <stdio.h>

int main()
{
    int n;
    int linha;
    int coluna;
    float soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    float mat[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Elemento[%d,%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    soma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] > 0)
            {
                soma = soma + mat[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1f\n\n", soma);

    linha = 0;
    printf("Escolha uma linha: ");
    scanf("%d", &linha);

    printf("LINHA ESCOLHIDA: ");

    for(int i = 0; i < n; i++)
    {
        printf("%.1f ", mat[linha][i]);
    }

    coluna = 0;
    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA: ");

    for(int i = 0; i < n; i++)
    {
        printf("%.1f ", mat[i][coluna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");

    for(int i = 0; i < n; i++)
    {
        printf("%.1f ", mat[i][i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] < 0)
            {
                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {

            printf("%.1f ", mat[i][j]);

        }
        printf("\n");
    }
}

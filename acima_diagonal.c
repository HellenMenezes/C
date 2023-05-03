#include <stdio.h>

int main()
{
    int n;
    int somaAcima;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Elemento[%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    somaAcima = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i < j)
            {
                somaAcima = somaAcima + mat[i][j];
            }
        }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", somaAcima);
}

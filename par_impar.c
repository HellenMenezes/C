#include <stdio.h>

int main()
{
    int n;
    int x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x == 0)
        {
            printf("NULO\n");
        }
        else
        {
            if (x % 2 == 0)
            {
                printf("PAR");
            }
            else
            {
                printf("IMPAR");
            }

            if(x > 0)
            {
                printf(" POSITIVO\n");
            }
            else
            {
                printf(" NEGATIVO\n");
            }
        }
    }
}

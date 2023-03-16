#include <stdio.h>

int main()
{
    int n;
    int x;
    int dentro;
    int fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    dentro = 0;
    fora = 0;
    for(int i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x >= 10 && x <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);
}

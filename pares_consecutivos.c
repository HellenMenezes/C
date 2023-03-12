#include <stdio.h>

int main()
{
    int x;
    int soma;

    soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    while(x != 0)
    {
        if(x % 2 != 0)
        {
            x = x + 1;
        }
        soma = x * 5 + 20;
        printf("SOMA = %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }
}

#include <stdio.h>

int main()
{
    int idade;
    int cont;
    float soma;
    float media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if(idade < 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
    else
    {
        soma = 0;
        cont = 0;

        while(idade >= 0)
        {
            cont = cont + 1;
            soma = soma + idade;
            scanf("%d", &idade);
        }
    }
    media = soma / cont;
    printf("MEDIA = %.2f\n", media);
}

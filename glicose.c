#include <stdio.h>

int main()
{
    float glicose;
    printf("Digite a medida da glicose: ");
    scanf("%f", &glicose);

    printf("Classificacao: ");
    if (glicose <= 100)
    {
        printf("Normal\n");
    }
    else if (glicose <= 140)
    {
        printf("Elevado\n");
    }
    else
    {
        printf("Diabetes\n");
    }

}

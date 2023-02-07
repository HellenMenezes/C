#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    notaFinal = nota1 + nota2;
    printf("NOTA FINAL = %.1f\n", notaFinal);

    if (notaFinal > 60)
    {
        printf("APROVADO");
    }
    else
    {
        printf("REPROVADO");
    }

}

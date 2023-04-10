#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int contMulheres;
    int contHomens;
    float menorAltura;
    float maiorAltura;
    float alturasomaMulheres;
    float alturamediaMulheres;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    float alturas[n];
    char generos[n];

    for(int i = 0; i < n; i++)
    {
        printf("Altura da %da pessoa:\n", i+1);
        scanf("%f", &alturas[i]);
        printf("Genero da %da pessoa:\n", i+1);
        scanf(" %c", &generos[i]);
    }

    menorAltura = alturas[0];
    maiorAltura = alturas[0];

    for(int i = 1; i < n; i++)
    {
        if(alturas[i] < menorAltura)
        {
            menorAltura = alturas[i];
        }
        if(alturas[i] > maiorAltura)
        {
            maiorAltura = alturas[i];
        }
    }

    printf("Menor altura = %.2f\n", menorAltura);
    printf("Maior altura = %.2f\n", maiorAltura);

    contHomens = 0;
    contMulheres = 0;
    alturasomaMulheres = 0;

    for(int i = 0; i < n; i++)
    {
        if(generos[i] == 'M')
        {
            contHomens++;
        }
        else
        {
            contMulheres++;
            alturasomaMulheres = alturasomaMulheres  + alturas[i];
        }
    }
    alturamediaMulheres = alturasomaMulheres / contMulheres;
    printf("Media das alturas das mulheres = %.2f\n", alturamediaMulheres);
    printf("Numero de homens = %d\n", contHomens);
}

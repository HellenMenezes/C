#include <stdio.h>

int main()
{
    int n;
    float valor1;
    float valor2;
    float valor3;
    float media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Digite tres numeros:\n");
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        scanf("%f", &valor3);
        media = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;
        printf("MEDIA = %.1f\n", media);
    }
}

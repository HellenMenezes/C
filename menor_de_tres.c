#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int menor;

    printf("Primeiro valor: ");
    scanf("%d", &x);

    printf("Segundo valor: ");
    scanf("%d", &y);

    printf("Terceiro valor: ");
    scanf("%d", &z);

    menor = 0;

    if(x < y && x < z)
    {
        menor = x;
    }

    else if(y < z)
    {
        menor = y;
    }
    else
    {
        menor = z;
    }
    printf("MENOR = %d", menor);
}

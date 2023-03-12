#include <stdio.h>

int main()
{
    int codigo;
    int alcool;
    int gasolina;
    int diesel;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);

    while(codigo != 4)
    {
        if(codigo == 1)
        {
            alcool = alcool + 1;
        }
        else if(codigo == 2)
        {
            gasolina = gasolina + 1;
        }
        else if(codigo == 3)
        {
            diesel = diesel + 1;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}

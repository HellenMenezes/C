#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int abaixo;
    int entre;
    int acima;
    float totalCompra;
    float totalVenda;
    float lucroTotal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nomes[n][50];
    float precosCompra[n];
    float precosVenda[n];
    float porcentagem[n];

    for(int i = 0; i < n; i ++)
    {
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", &nomes[i]);
        printf("Preco de compra: ");
        scanf("%f", &precosCompra[i]);
        printf("Preco de venda: ");
        scanf("%f", &precosVenda[i]);
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for(int i = 0; i < n; i ++)
    {
        porcentagem[i] = (precosVenda[i] - precosCompra[i]) / precosCompra[i] * 100.0;
        if(porcentagem[i] < 10.0)
        {
            abaixo++;
        }
        else if(porcentagem[i] >= 10.0 && porcentagem[i] <= 20.0)
        {
            entre++;
        }
        else
        {
            acima++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;

    for(int i = 0; i < n; i ++)
    {
        totalCompra = totalCompra + precosCompra[i];
        totalVenda = totalVenda + precosVenda[i];
    }

    lucroTotal = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2f\n", totalCompra);
    printf("Valor total de venda:: %.2f\n", totalVenda);
    printf("Lucro total: %.2f\n", lucroTotal);
}

#include <stdio.h>

int main()
{
    int quantidade;
    float preco;
    float dinheiro;
    float troco;

    printf("Preco unitario do produto: ");
    scanf("%f", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    if (dinheiro < preco * quantidade)
    {
        troco = (preco * quantidade) - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS\n", troco);
    }
    else
    {
        troco = dinheiro - (preco * quantidade);
        printf("TROCO = %.2f\n", troco);
    }
}

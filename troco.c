#include <stdio.h>

int main() {
    float preco;
    int quantidade;
    float dinheiro;
    float troco;

    printf("Preco unitario do produto: ");
    scanf("%f", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    troco = dinheiro - (preco * quantidade);
    printf("TROCO = %.2f", troco);
}

#include <stdio.h>

int main() {
    char nome[50];
    float valor;
    int horas;
    float pagamento;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%f", &valor);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valor * horas;

    printf("O pagamento para %s deve ser %.2f", nome, pagamento);

}

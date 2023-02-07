#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
int main() {
    int idade1;
    int idade2;
    float media;
    char nome1[50];
    char nome2[50];

    idade1 = 0;
    idade2 = 0;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanf("%50[^\n]", nome1);
    printf("Idade: ");
    scanf("%d", &idade1);
    limpar_entrada();
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    scanf("%50[^\n]", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (float)(idade1 + idade2) / 2;
    printf(" A idade media de %s e %s e de %.1f", nome1, nome2, media);
}

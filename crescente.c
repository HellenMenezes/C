#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    do{
        if(x < y)
        {
            printf("CRESCENTE!\n");
        }
        else
        {
            printf("DECRESCENTE!\n");
        }
        printf("Digite dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }while(x != y);
    }

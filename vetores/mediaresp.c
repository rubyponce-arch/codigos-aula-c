#include <stdio.h>

int main()
{
    float notas[4];

    // Entrada de dados
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Exibição das notas
    for (int i = 0; i < 4; i++) {
        printf("\nNota %d: %.2f", i + 1, notas[i]);
    }

    return 0;
}
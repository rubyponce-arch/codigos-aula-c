#include <stdio.h>
#include <locale.h>

void calcularArea(int figura, float medida) {
    const float PI = 3.14159;
    float area;

    if (figura == 1) { // círculo
        area = PI * medida * medida;
        printf("Área do círculo: %.2f\n", area);
    }
    else if (figura == 2) { // quadrado
        area = medida * medida;
        printf("Área do quadrado: %.2f\n", area);
    }
    else {
        printf("Figura inválida!\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    float medida;

    printf("1 - Círculo\n");
    printf("2 - Quadrado\n");
    printf("Escolha a figura: ");
    scanf("%d", &opcao);

    if (opcao == 1)
        printf("Digite o raio: ");
    else
        printf("Digite o lado: ");

    scanf("%f", &medida);

    calcularArea(opcao, medida);

    return 0;
}

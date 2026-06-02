
#include <stdio.h>
#include <locale.h>

void calculadora(char operacao, float num1, float num2) {

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: divisao por zero!\n");
            break;

        default:
            printf("Operacao invalida!\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1, n2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    calculadora(op, n1, n2);

    return 0;
}

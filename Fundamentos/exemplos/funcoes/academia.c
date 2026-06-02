#include <stdio.h>
#include <locale.h>


float custoPorTreino(float mensalidade, int vezesSemana) {
    return mensalidade / (vezesSemana * 4);
}

float valorAnual(float parcela) {
    return parcela * 12;
}

int main() {
        setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Olá! seja bem vindo(a/e)!");
    printf("\nAqui temos as academias e seus planos disponivéis, confira:\n");

    printf("\n------VIVA SAÚDE------");
    printf("\nMensalidade: R$ 49,99");
    printf("\nAnual:12 X 39,99");
    printf("\nUso 3 vezes por semana\n");

    printf("\n------SAÚDE EM DIA------");
    printf("\nMensalidade:R$ 59,99");
    printf("\nAnual: 12 X 48,99");
    printf("\nUso 4 vezes por semana\n");

    printf("\n------FITNESS PRO------");
    printf("\nMensalidade:R$ 69,99");
    printf("\nAnual: 12 X 58,99");
    printf("\nUso ilimitado por semana\n");


printf("\nPara descobrir o melhor plano para você, aqui estão os detalhes:\n");

    float mensalViva = 49.99;
    float mensalSaude = 59.99;
    float mensalFitness = 69.99;

    float anualViva = valorAnual(39.99);
    float anualSaude = valorAnual(48.99);
    float anualFitness = valorAnual(58.99);

    printf("\n===VIVA SAÚDE===\n");
    printf("Mensal: R$ %.2f\n", mensalViva);
    printf("Anual: R$ %.2f\n", anualViva);
    printf("Custo por treino: R$ %.2f\n\n", custoPorTreino(mensalViva, 3));

    printf("\n===SAÚDE EM DIA===\n");
    printf("Mensal: R$ %.2f\n", mensalSaude);
    printf("Anual: R$ %.2f\n", anualSaude);
    printf("Custo por treino: R$ %.2f\n\n", custoPorTreino(mensalSaude, 4));

    printf("\n===FITNESS PRO===\n");
    printf("Mensal: R$ %.2f\n", mensalFitness);
    printf("Anual: R$ %.2f\n", anualFitness);
    printf("Custo por treino: R$ %.2f\n", custoPorTreino(mensalFitness, 7));

    return 0;
}

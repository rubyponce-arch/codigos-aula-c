#include <stdio.h>
#include <locale.h>

void calcularHorasCurso(int horasPorSemana) {
    int meses = 5;
    int semanas = meses * 4;
    int totalHoras = horasPorSemana * semanas;

    printf("\nTotal de horas do curso no semestre: %d horas\n", totalHoras);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int horasPorSemana;

    printf("Digite a quantidade de horas de aula por semana: ");
    scanf("%d", &horasPorSemana);

    calcularHorasCurso(horasPorSemana);

    return 0;
}

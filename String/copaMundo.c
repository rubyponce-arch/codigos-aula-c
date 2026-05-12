#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char grupoBrasil[4][50];
    int resultados[3][2]; // [jogo][gols]

    printf("--Vamos preencher o grupo do Brasil na Copa--\n");

    // Entrada das seleções
    for (int i = 0; i < 4; i++) {
        printf("\nQual seleção? ");
        scanf(" %[^\n]", grupoBrasil[i]);
    }

    printf("\n--Agora os resultados--\n");

    // Entrada dos resultados
    for (int i = 0; i < 3; i++) {
        printf("\nPartida %d: %s x %s = ", i+1, grupoBrasil[0], grupoBrasil[i+1]);
        scanf("%d %d", &resultados[i][0], &resultados[i][1]);
    }

    printf("\n--Resultado dos jogos--\n");

    // Exibição dos resultados
    for (int i = 0; i < 3; i++) {
        printf("\n%s %d x %d %s",
               grupoBrasil[0],
               resultados[i][0],
               resultados[i][1],
               grupoBrasil[i+1]);
    }

    return 0;
}
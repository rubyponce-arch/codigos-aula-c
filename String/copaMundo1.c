pode corrigir esse código pra mim? #include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    char grupoBrasil[4][50];
    int resultados[3][2];

    printf("--Vamos preencher o grupo do Brasil na Copa--");
    for (int i=0; i < 4; i++)
{
        printf("\nQual seleção? ");
        scanf(" %[^\n]", grupoBrasil[i]);

        printf("\n--Legal, agora os resultados--"); }

        for (int i=0; i < 3; i++)
       { printf("\nPartida %i: %s x %s=", i+1, grupoBrasil[0], grupoBrasil[i+1]);
        scanf("%i x %i", &resultados[0], &resultados[i+1][i]);
       }
        printf("--Resultado dos jogos--");
       for (int i=0; i < 3; i++)

       printf("\n%s %i %s",grupoBrasil[0], resultados[0][i], resultados[i+1][i], grupoBrasil[i+1]);
}
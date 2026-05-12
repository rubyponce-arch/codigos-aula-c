#include <stdio.h>

int main () {
float valorLancheRodeio = 0;
float valorBatataGrande = 0;
float valorRefriCoca = 0;
float valorSobremessa = 0;

printf ("Qual o valor do lanche?");
scanf("%f", &valorLancheRodeio);
printf ("Qual o valor da Batata Grande?");
scanf("%f", &valorBatataGrande);
printf ("Qual o valor do Refrigerante?");
scanf("%f", &valorRefriCoca);
printf ("Qual o valor da Sobremessa?");
scanf("%f", &valorSobremessa);

float valorTotal = valorBatataGrande + valorLancheRodeio + valorRefriCoca + valorSobremessa;

if (valorTotal < 40) {
    printf("O valor ficou barato R$ %.2f", valorTotal);
} else if (valorTotal >= 40 && valorTotal <=55) {
    printf("O valor ficou razoavel R$ %.2f", valorTotal);
} else if (valorTotal > 55) {
    printf("O valor total ficou R$ %.2f", valorTotal);
}


    return 0;
}
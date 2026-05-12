#include <stdio.h>

int main () {
float valorCorteCabelo = 0;
float valorPintarCabelo = 0;
float valorSobrancelha = 0;
float valorHidratacao = 0;

printf()
printf ("Qual o valor do corte de cabelo?");
scanf("%f", &valorCorteCabelo);
printf ("Qual o valor de pintar o cabelo?");
scanf("%f", &valorPintarCabelo);
printf ("Qual o valor da Sombrancelha?");
scanf("%f", &valorSobrancelha);
printf ("Qual o valor da Hidratacao?");
scanf("%f", &valorHidratacao);

float valorTotal = valorCorteCabelo + valorPintarCabelo + valorSobrancelha + valorHidratacao;

if (valorTotal < 120) {
    printf("O valor ficou barato R$ %.2f", valorTotal);
} else if (valorTotal >= 120 && valorTotal <=260) {
    printf("O valor ficou razoavel R$ %.2f", valorTotal);
} else if (valorTotal > 260) {
    printf("O valor total ficou caro R$ %.2f", valorTotal);
}


    return 0;
}
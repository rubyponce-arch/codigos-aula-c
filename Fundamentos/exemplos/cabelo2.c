#include <stdio.h>

int main () {
float valorCorteCabelo = 0;
float valorPintarCabelo = 0;
float valorHidratacao = 0;
float valorEscova = 0;
float valorProgressiva = 0;
int parcela = 0; 
int opcao = 0; // 1->sim, 0 ->nao

printf ("voce vai pintar o cabelo?  \n 1 ->sim, 0 ->nao");
scanf("%i", &opcao); 

if (opcao == 1){
    printf ("Qual o valor para pintar o cabelo?"); 
    scanf("%f", &valorPintarCabelo); 
}
    printf ("voce vai cortar o cabelo? \n 1 ->sim, 0 ->nao");
    scanf("%i", &opcao);


if (opcao == 1){
    printf ("Qual o valor para cortar o cabelo?"); 
    scanf("%f", &valorCorteCabelo); 
}
    printf ("voce vai hidratar o cabelo?  \n 1 ->sim, 0 ->nao");
    scanf("%i", &opcao);

if (opcao == 1)
    printf ("Qual o valor para hidratar o cabelo?"); 
    scanf("%f", &valorHidratacao); 

if (opcao == 1){
    printf ("voce vai fazer escova no cabelo? \n 1 ->sim, 0 ->nao");
    scanf("%i", &opcao);
}
    printf ("Qual o valor para escova no cabelo?"); 
    scanf("%f", &valorEscova); 

    if (opcao == 1){
    printf ("voce vai fazer progressiva no cabelo?  \n 1->sim, 0->nao");
    scanf("%i", &opcao);
}
    printf ("Qual o valor para a progressiva no cabelo?"); 
    scanf("%f", &valorProgressiva); 

    float valorTotal = valorCorteCabelo + valorPintarCabelo + valorEscova + valorProgressiva + valorHidratacao;

if (valorTotal < 120) {
    printf("O valor ficou barato R$ %.2f", valorTotal);
} else if (valorTotal >= 120 && valorTotal <=260) {
    printf("O valor ficou razoavel R$ %.2f", valorTotal);
} else if (valorTotal > 260) {
    printf("O valor total ficou caro R$ %.2f", valorTotal);
}
    printf ("Você quer parcelar ou pagar a vista? \n 1 ->vista, 0->parcela");
   scanf ("%f", &opcao);

   if (opcao == 1) {
    // desconto 5
    float desconto = valorTotal * 
   }
   if (opcao == 0) {
    // parcelado
    float totalParcelado = valorTotal/parcela
    



    return 0;
}


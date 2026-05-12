#include <stdio.h>

int main() {
    // Entrada
    float rodeio = 24.99;
    float refrigerante = 7.99;
    float batataGrande = 14.99;
    float casquinha = 4.99;
    float cupom = 0.07;

    // Processamento
    float total = rodeio + refrigerante + batataGrande + casquinha;
    float desconto = total * cupom;
    float totalPagar = total - desconto;


    // Saída
    printf("O total e R$ %.2f \n", total);
    printf("O desconto e de R$ %.2f \n", desconto);
    printf("O total a ser pago e R$ %.2f \n", totalPagar);
    
    return 0;
}
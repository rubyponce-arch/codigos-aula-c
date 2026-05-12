#include <stdio.h>


int main() {
    // Entrada de informações, variáveis e constantes

    const float valorPorLitro = 0.05;
    const int qtdeLitrosMulta = 400;
    const int qtdeLitrosDesconto = 250;
    const float valorMulta = 150;
    const float valorDesconto = 50;
    const int periodo30 = 30;
    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    int qtdePessoas = 0;
    float valorTotalConta = 0;
    int qtdeLitrosConsumida = 0;
    int idade = 0;

    // Processamento das informações

    printf ("Ola, queremos calcular sua conta de agua. \n");
    printf ("De inicio, quantas pessoas moram na residencia?");
    scanf ("%i", &qtdePessoas);

    for (int i=0; i<qtdePessoas; i++){

        printf ("Otimo, qual a idade da pessoa %i: ", i);
        scanf ("%i", &idade);

        if (idade <= 10) {
         qtdeLitrosConsumida += 18;
        } else if (idade > 10 && idade <= 18) {
         qtdeLitrosConsumida += 30;
        } else if (idade >18 && idade <= 25) {
         qtdeLitrosConsumida += 42;
        } else if (idade > 25) {
         qtdeLitrosConsumida += 24;
        }

    }

    // Valor total da conta
    valorTotalConta = valorPorLitro * qtdeLitrosConsumida * periodo30;

    // Saída, relatório

    if (qtdeLitrosConsumida >= faixaExcessiva) {
// faixa excessiva
    printf("Faixa de consumo: Excessiva!\n");
     printf("Total de pessoas na residencia: %i\n", qtdePessoas);
     printf ("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
     printf ("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
     printf ("Multa aplicada: R$ %.2f\n", valorMulta);
    } else if (qtdeLitrosConsumida <= faixaEconomica) {
// faixa econômica
    printf("Faixa de consumo: Economica!\n");
    printf("Total de pessoas na residencia: %i\n", qtdePessoas);
    printf ("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
    printf ("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
     printf ("Desconto na proxima conta: R$ %.2f\n", valorDesconto);
    } else {
// faixa normal
  printf("Faixa de consumo: Normal\n");
  printf("Total de pessoas na residencia: %i\n", qtdePessoas);
  printf ("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
  printf ("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
     
    }



    return 0;
}
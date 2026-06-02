#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float placaDeVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor21 = 679.90;

    float total, desconto, valorVista;
    float parcela;
    int qtdPessoas = 6;

    total = placaDeVideo + caixaSom + kitMouseTeclado + monitor21;

    desconto = total * 0.15;
    valorVista = total - desconto;

    parcela = total / 12;

    printf("\nOlá! seja bem vindo(a/e)\n");
    printf("\ntemos algumas opções de orçamento para a sua compra, observe:\n");
    printf("\nOPÇÃO Á VISTA: 15 POR CENTO DE DESCONTO.\n");
    printf("\nOPÇÃO PARCELADA: ATÉ 12 VEZES SEM JUROS.\n");
    printf("\nOPÇÃO COM 5 AMIGOS: A VISTA E PARCELADO PARA CADA UM.\n");

    printf("\n Para melhor entendimento para sua tomada de decisão, aqui estão os detalhes:\n");


    printf("\n======ORÇAMENTO======\n");
    printf("Placa de vídeo: R$ %.2f\n", placaDeVideo);
    printf("Caixa de som: R$ %.2f\n", caixaSom);
    printf("Kit mouse e teclado: R$ %.2f\n", kitMouseTeclado);
    printf("Monitor 21 polegadas: R$ %.2f\n", monitor21);

    printf("\nValor total da compra: R$ %.2f\n", total);

    printf("\n---=Opção à VISTA=---\n");
    printf("Desconto de 15%%: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorVista);

    printf("\n---=Opção PARCELADA=---\n");
    printf("12x de R$ %.2f sem juros\n", parcela);

    printf("\n---=DIVISÃO entre 6 AMIGOS=---\n");
    printf("À vista: R$ %.2f para cada amigo\n", valorVista / qtdPessoas);
    printf("Parcelado: R$ %.2f para cada amigo\n", total / qtdPessoas);

    printf("\nBoas compras!!");

    return 0;
}
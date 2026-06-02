#include <stdio.h>
#include <locale.h>

float calcularLitros(float distancia, float consumo) {
    return distancia / consumo;
}


float calcularCusto(float distancia, float consumo, float precoCombustivel) {
    float litros = calcularLitros(distancia, consumo);
    return litros * precoCombustivel;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float distancia;
    float consumoGasolina, consumoEtanol;
    float precoGasolina, precoEtanol;

    printf("Distância da viagem (km): ");
    scanf("%f", &distancia);

    printf("Consumo com gasolina (km/L): ");
    scanf("%f", &consumoGasolina);

    printf("Consumo com etanol (km/L): ");
    scanf("%f", &consumoEtanol);

    printf("Preço da gasolina (R$/L): ");
    scanf("%f", &precoGasolina);

    printf("Preço do etanol (R$/L): ");
    scanf("%f", &precoEtanol);

    float custoGasolina = calcularCusto(distancia, consumoGasolina, precoGasolina);
    float custoEtanol = calcularCusto(distancia, consumoEtanol, precoEtanol);

    printf("\n---=RESULTADO=---\n");
    printf("Custo com gasolina: R$ %.2f\n", custoGasolina);
    printf("Custo com etanol:   R$ %.2f\n", custoEtanol);

    if (custoGasolina < custoEtanol) {
        printf("A gasolina e a opção mais vantajosa.\n");
    } else if (custoEtanol < custoGasolina) {
        printf("O etanol e a opção mais vantajosa.\n");
    } else {
        printf("As duas opções possuem o mesmo custo.\n");
    }

    return 0;
}

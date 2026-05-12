/*
Calcule o imc
de uma pessoa
com valores
fixos na variaveis
e mostre o valor ao final
*/

int main() {
    // declaração de variáveis
    // Entrada
    int peso = 45;
    float altura = 1.61;

    printf ("Olá vamos calcular o IMC!\n");

    int imc = peso / (altura * altura);

    printf ("O IMC e %d", imc);

    return 0;

}
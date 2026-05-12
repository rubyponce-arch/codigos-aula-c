/**
 * Agora voce deve copiar o 
 * codigo do exemplo imc.c
 * e deixar ele com informações           
 * dinamicas ;D
 */

 int main() {
   
    // Entrada
    float peso = 0;
    float altura = 0;

    printf ("Quanto voce pesa?");
    scanf("%f", &peso);

    printf ("Quanto voce mede?");
    scanf("%f", &altura);

    printf ("vamos calcular o IMC!\n");

    float imc = peso / (altura * altura);

    //saida
    printf("O seu imc e %f" , imc);

    return 0;

}
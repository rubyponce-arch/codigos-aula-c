#include <stdio.h>

int main() {
    printf("Vamos sair todos juntos!");

    int amigos = 0;
    double valorLanche = 0;
    double valorBebida = 0;
    double valorSobremessa = 0;

    printf("Quantos amigos vao com voce?");
    scanf("%lf", &amigos);
    
    for (int i=0; i <= amigos; i++ ) {
        printf("\n Qual o valor do lanche?");
        scanf("%lf", &valorLanche);
        
        totalNotas = totalNotas + nota;

    }

        mediaFinal = totalNotas / qtdeNotas;

        printf("\n A media final e %.2lf", mediaFinal);

        if (mediaFinal >= 5) {
            printf ("\n Aprovado");
        } else {
            printf ("\n Reprovado");
        }

    return 0;
}
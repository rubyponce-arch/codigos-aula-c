#include <stdio.h>
#include <stdbool.h>

int main() {
    bool comprou = 0;
    bool comprouIngressoAntes = false;
    bool comprouIngressoNaHora = false;

    comprouIngressoAntes = comprou;

    printf ("Comprou o ingresso antes? 0-> nao 1->sim");
    scanf("%s", &comprou);

    comprouIngressoNaHora = comprou;

    printf ("Comprou o ingresso na hora? 0-> nao 1->sim");
    scanf("%s", &comprouIngressoNaHora);

    if (comprouIngressoAntes || comprouIngressoNaHora) {
        printf ("Vai assistir o show!");
    } else {
        printf ("Não vai assistir o show :T");
    }
    return 0;
}
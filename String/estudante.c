#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[30];
    char idade[3];
    char serie[40];
    char curso[50];

    printf("\nqual seu nome?");
    scanf(" %[^\n]", nome);

    printf("\nqual sua idade?");
    scanf(" %[^\n]", idade);

    printf("\nqual sua serie?");
    scanf(" %[^\n]", serie);

    printf("\nqual seu curso?");
    scanf(" %[^\n]", curso);

    return 0;

}
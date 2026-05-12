#include <stdio.h>

int main () {

char lanches [4] [20] = {
    "Rodeio", "Whopper", "Cheddar duplo", "Big king"
};

    printf("---Marmitas---");

    for (int i=0; i < 4; i++) {
        printf ("\n %s", lanches[i]);
    }
return 0; 
}
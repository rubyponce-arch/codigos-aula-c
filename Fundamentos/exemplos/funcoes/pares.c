#include <stdio.h>

int main (){

    float n1 = 0;
    float n2 = 0;

    printf("\nQual o seu primeiro numero? ");
    scanf("%f", &n1);

     printf("\nQual o seu segundo numero? ");
    scanf("%f", &n2);


    void mostrarPares(int inferior, int superior){ 

    for (int i = inferior; i <= superior; i++) {
        if(i % 2==0){
            printf("\n%d", i);
        }
    }
}

 mostrarPares(n1, n2);

    return 0;
}                                            


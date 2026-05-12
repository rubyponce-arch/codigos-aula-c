/*
Voce precisa comprar um carro e pretende 
realizar o pagamento de forma parcelado
Crie um algoritmo que calcule o valor 
das parcelas descontando 
o valor da entrada de 30%
*/
#include <stdio.h>

int main() {

   // Entrada
   float valorCarro = 0;
   int Parcelas = 0;
   const float entrada = 0.30;

   printf ("Qual o valor do carro?");
   scanf ("%f", &valorCarro);
   printf ("Qual a quantidade das parcelas?");
   scanf ("%f", &Parcelas);

   // Processamento

   float valorTotal = valorCarro * entrada;
   float valorAlt = valorCarro - valorTotal;
   float valorParcelado = Parcelas / valorAlt ; 

   // Saída 
   
   printf ("o valor da parcela é %.2f \n", valorTotal);
   printf ("o valor de cada parcela e %.2f \n", valorParcelado);
   
   return 0;
}


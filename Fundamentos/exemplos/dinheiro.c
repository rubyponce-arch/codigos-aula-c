/*
Você está trabalhando e gostaria de 
guardar 25% do seu salário todo mes
o banco está com um investimento que 
rende 6.8% ao mes de juros e voce vai usar
esse formato de investimento,
Crie um algoritmo para calcular seu 
investimento.
*/

#include <stdio.h>

int main () {

   // Entrada

   float Salario = 0;
   float juros = 0.68;
   int tempo = 0;
   float guardar = 0.25;

   printf ("Qual o valor do seu salario?");
   scanf ("%f", &Salario);
   printf ("Por quanto tempo voce deseja guardar?");
   scanf ("%i", &tempo);
  
   
   
   // Processamento
   
   float totaljurosPercentual = tempo * juros;
   float salario25 = Salario * guardar;
   float totaldinheiro = tempo * totaljurosPercentual;
   float totalJurosValor = totaldinheiro * totaljurosPercentual;
   float totalcomJuros = totalJurosValor + totaldinheiro;



   // Saída

   printf ("Total juros em %.2f \n", totaljurosPercentual);
   printf ("Valor guardadp sem juros R$ %.2f \n", totaldinheiro);
   printf ("meses %i \n", tempo);
   printf ("Valor de juros do banco R$ %.2f \n", totalJurosValor);
   printf ("Valor guardado com juros R$  %.2f \n", totalcomJuros);

   return 0;
}   
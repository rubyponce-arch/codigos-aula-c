#include <stdio.h>

// função para retornar os km

float calcularValorKM (int qtdeKmPercorridos) {
   if (qtdeKmPercorridos <= 100){
    return qtdeKmPercorridos * 0.20;
   }
   if (qtdeKmPercorridos > 100 && qtdeKmPercorridos <= 200){
    return qtdeKmPercorridos * 0.45;
   }
    if (qtdeKmPercorridos > 200 && qtdeKmPercorridos <= 300){
    return qtdeKmPercorridos * 0.85;
   }
    if (qtdeKmPercorridos > 300){
    return qtdeKmPercorridos * 1.05;
   }
}

   float calcularValorEnntrega(int qtdeEntregas) {
    if (qtdeEntregas <= 10) {
        return 7.99;
    }
     if (qtdeEntregas > 10 && qtdeEntregas <= 20) {
        return 16.99;
    }
     if (qtdeEntregas > 20 && qtdeEntregas <= 30) {
        return 28.99;
    }
   }

int main() {

    // variáveis

    int trabalhouSegunda = 0;
    int qtdeEntregasSegundas = 0;
    int kmS = 0;
     float totalEntregaSegun = 0;
    float totalkmSegun = 0;

    int trabalhouTerca = 0;
    int qtdeEntregasTerca = 0;
    int kmT = 0;
     float totalEntregaTerca = 0;
    float totalkmTerca = 0;

    int trabalhouQuarta = 0;
    int qtdeEntregasQuarta = 0;
    int kmQ = 0;
     float totalEntregaQuarta = 0;
    float totalkmQuarta = 0;

    int trabalhouQuinta = 0;
    int qtdeEntregasQuinta = 0;
    int kmQq = 0;
     float totalEntregaQuin = 0;
    float totalkmQuin = 0;

    int trabalhouSexta = 0;
    int qtdeEntregasSexta = 0;
    int kmSx = 0;
     float totalEntregaSex = 0;
    float totalkmSex = 0;

    int trabalhouSabado = 0;
    int qtdeEntregasSabado = 0;
    int kmSa = 0;
     float totalEntregaSab = 0;
    float totalkmSab = 0;

    int trabalhouDomingo = 0;
    int qtdeEntregasDomingo = 0;
    int kmD = 0;
    float totalEntregaDom = 0;
    float totalkmDom = 0;

    int totalDias = 0;

    printf ("Sou o algoritmo que vai te auxiliar, Matias.\n");


    printf ("Trabalhou na segunda-feira? 1(sim), 2(nao) ");
scanf("%i", &trabalhouSegunda);
    if (trabalhouSegunda == 1) {

         totalDias ++;
        printf("Quantas entregas fez na segunda?");
        scanf ("%i", &qtdeEntregasSegundas);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmS);

        totalEntregaSegun = calcularValorEnntrega (qtdeEntregasSegundas);
        totalkmSegun = calcularValorKM (kmS);
    }

    printf ("Trabalhou na terca-feira? 1(sim), 2(nao) ");
scanf("%i", &trabalhouTerca);
    if (trabalhouTerca == 1) {

         totalDias ++;
        printf("Quantas entregas fez na terca?");
        scanf ("%i", &qtdeEntregasTerca);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmT);

         totalEntregaTerca = calcularValorEnntrega (qtdeEntregasTerca);
        totalkmTerca = calcularValorKM (kmT);
    }

    printf ("Trabalhou na quarta-feira? 1(sim), 2(nao) ");
scanf("%i", &trabalhouQuarta);
 if (trabalhouQuarta == 1) {

     totalDias ++;
        printf("Quantas entregas fez na quarta?");
        scanf ("%i", &qtdeEntregasQuarta);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmQ);

         totalEntregaQuarta = calcularValorEnntrega (qtdeEntregasQuarta);
        totalkmQuarta = calcularValorKM (kmQ);
    }

    printf ("Trabalhou na quinta-feira? 1(sim), 2(nao) ");
scanf("%i", &trabalhouQuinta);
 if (trabalhouQuinta == 1) {

     totalDias ++;
        printf("Quantas entregas fez na quinta?");
        scanf ("%i", &qtdeEntregasQuinta);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmQq);

         totalEntregaQuin = calcularValorEnntrega (qtdeEntregasQuinta);
        totalkmQuin = calcularValorKM (kmQq);
    }

    printf ("Trabalhou na sexta-feira? 1(sim), 2(nao) ");
scanf("%i", &trabalhouSexta);
 if (trabalhouSexta == 1) {

     totalDias ++;
        printf("Quantas entregas fez na sexta?");
        scanf ("%i", &qtdeEntregasSexta);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmSx);

         totalEntregaSex = calcularValorEnntrega (qtdeEntregasSexta);
        totalkmSex = calcularValorKM (kmSx);
    }

    printf ("Trabalhou no sabado? 1(sim), 2(nao) ");
scanf("%i", &trabalhouSabado);
 if (trabalhouSabado == 1) {

    totalDias ++;
        printf("Quantas entregas fez no sabado?");
        scanf ("%i", &qtdeEntregasSabado);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmSa);

         totalEntregaSab = calcularValorEnntrega (qtdeEntregasSabado);
        totalkmSab = calcularValorKM (kmSa);
    }

    printf ("Trabalhou na domingo? 1(sim), 2(nao) ");
scanf("%i", &trabalhouDomingo);
 if (trabalhouDomingo == 1) {

    totalDias ++;
        printf("Quantas entregas fez no Domingo?");
        scanf ("%i", &qtdeEntregasDomingo);

        printf ("Quantos quilometros percorreu?");
        scanf ("%i", &kmD);

         totalEntregaDom = calcularValorEnntrega (qtdeEntregasDomingo);
        totalkmDom = calcularValorKM (kmD);
    }

    // relatório da semana completa
     printf ("\nSegunda-feira: %s", trabalhouSegunda == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasSegundas);
     printf ("\nKM percorridos: %i", kmS);
     printf ("\n Valor a receber: R$ %.2f", totalEntregaSegun + totalkmSegun);

     printf ("\nTerca-feira: %s", trabalhouTerca == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasTerca);
     printf ("\nKM percorridos: %i", kmT);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaTerca + totalkmTerca);

     printf ("\nQuarta-feira: %s", trabalhouQuarta == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasQuarta);
     printf ("\nKM percorridos: %i", kmQ);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaQuarta + totalkmQuarta);

     printf ("\nQuinta-feira: %s", trabalhouQuinta == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasQuinta);
     printf ("\nKM percorridos: %i", kmQq);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaQuin + totalkmQuin);

     printf ("\nSexta-feira: %s", trabalhouSexta == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasSexta);
     printf ("\nKM percorridos: %i", kmSx);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaSex + totalkmSex);

     printf ("\nSabado: %s", trabalhouSabado == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasSabado);
     printf ("\nKM percorridos: %i", kmSa);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaSab + totalkmSab);

     printf ("\nDomingo: %s", trabalhouDomingo == 1 ? "sim" : "nao");
     printf ("\nQuantidade de Entregas: %i", qtdeEntregasDomingo);
     printf ("\nKM percorridos: %i", kmD);
      printf ("\n Valor a receber: R$ %.2f", totalEntregaDom + totalkmDom);

      printf ("\n Total semanal");
      printf ("\n Total dias trabalhados: %i", totalDias);
      int totalEntregas = qtdeEntregasDomingo + qtdeEntregasQuarta + qtdeEntregasQuinta + qtdeEntregasSabado + qtdeEntregasSegundas + qtdeEntregasSexta + qtdeEntregasTerca;
      printf ("\nTotal das entregas %i", totalEntregas);
      int totalKMs = kmD + kmQ + kmQq + kmS + kmSa + kmSx + kmT;
      printf ("\nTotal de KMs: %i", totalKMs);

      printf ("\nMedia entrega por dia %i", totalEntregas / totalDias);

      float totalGeral = totalEntregaDom + totalkmDom + 
      totalEntregaQuarta + totalkmQuarta + totalEntregaQuin + 
      totalkmQuin + totalEntregaSab + totalkmSab + totalEntregaSegun + 
      totalkmSegun + totalEntregaSex + totalkmSex + totalEntregaTerca +
      totalkmTerca;
     

      printf("\nMedia valor por dia %.2f", totalGeral);

      // Ganhou o bonus
      int media = totalEntregas / totalDias;
      if (totalDias == 7 && totalKMs >= 200 && media >= 26) {
      printf ("\nBonus de R$ 178,99");
      
      }

    return 0;
}
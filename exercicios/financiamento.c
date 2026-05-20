#include <stdio.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[50];
    int parcelas = 0;
    int parcelas2 = 0;
    int financiamento = 0;
    const float JurosImovel = 0.5f;
    const float JurosVeiculo = 1.5f;
    
    printf("Olá seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("Obrigado pela preferencia, %s", nome);
    
    { 
    printf("\nQual financiamento você deseja? 1 -> veiculo, 0 -> imovel");
    scanf("%i", &financiamento);

    if (financiamento == 0){

        int opcaoImovel;
        float valor, renda;
        int entrada = 0;

        
        float valorEntrada = 0;

        float totalJuros = 0;
        float totalJurosRS = 0;
        float valorTotal = 0;
        float valorParcela = 0;
    
     
        printf ("\nQual o imovel?");
        printf("1 - Casa: 150 - 360 meses\n");
        printf("2 - Apartamento: 100 - 300 meses\n");
        printf("opcao: ");
        scanf("%i", &opcaoImovel);
     

        printf("Qual o valor do imovel?");
        scanf("%f", &valor);

        printf("Qual sua renda mensal?");
        scanf("%f", &renda);
      
        printf("Qual a quantidade de parcelas que você deseja, %s?", nome);
        scanf("%i", &parcelas);

        printf("\nDeseja dar entrada? %s, sim -> 1, nao -> 0", nome);
        scanf("%i", &entrada);

        if(entrada == 1){

            printf("Qual o valor da sua entrada?");
            scanf("%f", &valorEntrada);  
        }

       
        switch (opcaoImovel)
        {
        case 1:

            totalJuros = (parcelas * JurosImovel) / 100;
            valorTotal = valor - valorEntrada;
            totalJurosRS = valorTotal * totalJuros;
            valorTotal = valorTotal + totalJurosRS;
            valorParcela = valorTotal / parcelas;

            break;

        case 2:

            totalJuros = (parcelas * JurosImovel) / 100;
            valorTotal = valor - valorEntrada;
            totalJurosRS = valorTotal * totalJuros;
            valorTotal = valorTotal + totalJurosRS;
            valorParcela = valorTotal / parcelas;

            break;

        default:
            break;
        }

        printf("=== Resultado! ===");
        printf("\nCliente: %s\n", nome);
        printf("Parcela: R$ %.2f\n", valorParcela);
        printf("Limite 30%% da renda R$ %.2f\n", renda * 0.30);


        if (valorParcela <= renda * 0.30f) {
            printf("Financiameto aprovado!\n");
        } else {
            printf("Financiamento reprovado!\n");
        }

    } else {

        int opcaoVeiculo;
        float valor1, renda1;
        int entrada = 0;

      
        float valorEntrada = 0;
        float totalJuros = 0;
        float totalJurosRS = 0;
        float valorTotal = 0;
        float valorParcela = 0;
    
     
        printf ("\nQual o Veiculo?");
        printf("1 - Carro 6 - 48 meses\n");
        printf("2 - Caminhao 100 - 200 meses\n");
        printf("3 - moto 3 - 24 meses\n");
        printf("opcao: ");
        scanf("%i", &opcaoVeiculo);
     

        printf("Qual o valor do Veiculo?");
        scanf("%f", &valor1);

        printf("Qual sua renda mensal?");
        scanf("%f", &renda1);
      
        if(opcaoVeiculo == 1){

            printf("Qual a quantidade de parcelas que você deseja, %s? [6 a 48]", nome);
            scanf("%i", &parcelas);
            printf("\nBem: Carro\n");

        } else if (opcaoVeiculo == 2){

            printf("Qual a quantidade de parcelas que você deseja, %s? [100 a 200]", nome);
            scanf("%i", &parcelas);
            printf("\nBem: Caminhao\n");
        
        } else { 
    
            printf("Qual a quantidade de parcelas que você deseja, %s? [3 a 24]", nome);
            scanf("%i", &parcelas);
            printf("\nBem: moto\n");
        }

        printf("\nDeseja dar entrada? sim -> 1, nao -> 0");
        scanf("%i", &entrada);

        if(entrada == 1){

            printf("Qual o valor da sua entrada?");
            scanf("%f", &valorEntrada);  
        }

        totalJuros = (parcelas * JurosVeiculo) / 100;
        valorTotal = valor1 - valorEntrada;
        totalJurosRS = valorTotal * totalJuros;
        valorTotal = valorTotal + totalJurosRS;
        valorParcela = valorTotal / parcelas;

        printf("=== Resultado! ===");
        printf("\nCliente: %s\n", nome);
        printf("Parcela: R$ %.2f\n", valorParcela);
        printf("Limite 30%% da renda R$ %.2f\n", renda1 * 0.30f);

        if (valorParcela <= renda1 * 0.30f) {

            printf("Financiameto aprovado!\n");

        } else {

            printf("Financiamento reprovado!\n");
        }

    }

        printf("\n=====Desenvolvido por:=====\n");
        printf("\n    Mariana Ponce <3       \n");
        printf("\n===========================\n");

        return 0;
    }  
}
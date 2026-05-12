int main() {
 int dia = 0;
 
 printf ("Qual dia da semana? 1->dom, 7->sab");
 scanf("%i", &dia);

 switch (dia){

case 1:
    printf("Domingo, amanha acaba minha felicidade");
    break;
case 2:
    printf ("Segunda, cansei ja");
    break;
case 3:
    printf ("tercou, nao quero mais");
    break;
case 4:
    printf ("quarta, chega ne");
    break;
case 5:
    printf ("quinta, sobrevivi");
    break;
case 6:
    printf ("SEXTOU, YIIPY :D");
    break;
case 7:
    printf ("sabado, descansar ne");
    break;
    default:
    printf("Que dia é esse?");
    break;
    
 }
    return 0;
}
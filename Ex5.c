#include <stdio.h>

int b=0, quant, quant_total, result;
//b variavel aleatoria
float value, sum, average;
    //VALOR, SOMA, MEDIA
char answer;

int main() {
  while(1){
    switch(b){
      case 1:
      printf("Informe a quantidade do produto: ");
      scanf("%i", &quant);
      if(quant != 0 || quant > 0){
        printf("Informe valor unitario: ");
        scanf("%f", &value);
        
        sum = sum + (quant*value);
            //soma recebe soma mais quantidade do produto + quant
        quant_total = quant_total + quant;
        average = sum / quant_total;
      }
      if (quant == 0){
        printf("Valor total da compra: R$ %.2f\n", sum);
        printf("\n");
        printf("Valor medio da compra: R$ %.2f\n", average);
        printf("\n\n\n");
        printf("O valor total da compra e %i reais e %.2f centavos. \n"), (int)sum, sum - ((int)sum);
        printf("\n");
        printf("%i reais equivale a: = \n"), (int)sum;
        printf("\n");

        //nota200
        result = (int)sum/200;

        if (result != 0)
        {
          printf("%d notas(s) de 200 \n\t", result);
          sum = sum - (result*200); //ultiliza no prox
        }
        
        //nota100
        result = (int)sum/100;

        if (result != 0)
        {
          printf("%d notas(s) de 100 \n\t", result);
          sum = sum - (result*100); //ultiliza no prox
        }

        //nota50
        result = (int)sum/50;

        if (result != 0)
        {
          printf("%d notas(s) de 50 \n\t", result);
          sum = sum - (result*50); //ultiliza no prox
        }
        //nota20
        result = (int)sum/20;

        if (result != 0)
        {
          printf("%d notas(s) de 20 \n\t", result);
          sum = sum - (result*20); //ultiliza no prox
        }
        //nota10
        result = (int)sum/10;

        if (result != 0)
        {
          printf("%d notas(s) de 10 \n\t", result);
          sum = sum - (result*10); //ultiliza no prox
        }
        //nota5
        result = (int)sum/5;

        if (result != 0)
        {
          printf("%d notas(s) de 5 \n\t", result);
          sum = sum - (result*5);
        }
        //nota2
        result = (int)sum/2;

        if (result != 0)
        {
          printf("%d notas(s) de 2 \n\t", result);
          sum = sum - (result*2);
        }

        //moeda1
        result = (int)sum/1;
        if (result != 0)
        {
          printf("%d moeda(s) de 1 \n\t", result);
          sum = (sum - (result*1)) * 100; 
        }
        
        b=2;//finaliza caso 1 e inicia caso 2  
      }
      break;

      case 2:
        printf("\n\t");
        printf("Deseja repitir o programa(S ou N)?");
        scanf("%c", &answer);   

      if(answer == 's' || answer == 'S'){
        sum = 0; quant=0; average=0; b=0;
      }
      if(answer == 'n' || answer == 'N'){
        b = 20;
      }
      break;

      default:
        printf("Caractere Invalido!");
      break;  
    }
  }
  return 0;
}

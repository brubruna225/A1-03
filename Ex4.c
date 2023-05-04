#include <stdio.h>

int main(void) {
    int numberPosition;

  while(1){
      printf("Informe um numero: ");
        //Obtém o número
      scanf("%d", &numberPosition);
        // sai do loop se for menor q 0 = negativo
    if(numberPosition < 0){
      break;
    }   
  }
        
  return 0;
}

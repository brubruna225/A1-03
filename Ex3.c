#include <stdio.h>

int main() {
    int num, conta, dig_verif, inverso, soma = 0, i = 1;

    do {
        printf("Informe um numero de 4 digitos: ");
        //Obtém o número de quatro dígitos da entrada do usuário
        scanf("%d", &num);
      
      //  um intervalo de 1000 a 9999.
    } while (num < 1000 || num > 9999);

    //Separando os três primeiros números da conta
    conta = num / 10;

    //Separando o último número, o dígito verificador
    dig_verif = num %100;
  
    inverso = (conta % 10) * 100 + ((conta / 10) % 10) * 10 + (conta / 100);

    soma = conta + inverso;

    while (soma > 0) {
        dig_verif -= (soma % 10) * i;
        soma /= 10;
        i++;
    }

    if (dig_verif < 0) {
        dig_verif += 10;
    }

    if (dig_verif == num % 10) {
        printf("Numero da conta correto.\n");
    } else {
        printf("Numero da conta incorreto. Digito verificador correto: %d\n", dig_verif);
    }
  
    return 0;
}

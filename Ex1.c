#include <stdio.h>

    //Uma empresa deseja calcular a depreciação de seus bens. 
    //Para tanto, desenvolver um programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o período em anos.
    

    float valueBem, valueDepreciation, valueBemDepreciation, totalDepreciation;
    int period, b;

int main() {
    printf("Informe valor a ser depreciado:  ");
    scanf("%f", &valueBem);
    
    printf("Informe em anos a ser depreciado:  ");
    scanf("%i", &period);
    
    printf("\n Ano \t\t Valor do Bem \t\t Depreciação \t\t Valor Depreciado \n");
    printf("=======================================================");

    for(b=1; b<=period; b++){
        valueDepreciation = valueBem * (1.5/100);
        //Valor depreciado = valor do bem * (taxa de depreciação / 100)

        Depreciation = Depreciation + valueDepreciation;
        // Valor do bem depreciado = valor do bem – valor depreciado

        if(b==1){
            printf("\n%i\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\n", b, valueBem, valueDepreciation,valueBemDepreciation);
        }else{
            printf("%i\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\n", b, valueBem, valueDepreciation,valueBemDepreciation);
        }
    valueBem = valueBem - valueDepreciation;
    Depreciation = Depreciation + valueDepreciation;
    }
    printf("=======================================================");
    printf(" \n Depreciation acumulada : %.2f \n", Depreciation );

    return 0;
}

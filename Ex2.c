#include <stdio.h>

/*Oq o código está implementando?
    ele está com um erro e esse tbm
*/

int quantity, total=0, sum=0; float average; char category; 
//quantidade, total=0, soma=0; media; categoria;


int main(void){
    do{
        __fpurge(stdin);
        printf("Informe a categoria: ");
        scanf("%c", &category);

        if(category =='A' || category == 'B' || category == 'C'){
            quantity = -1;
            while (quantity <= 0);
            {
                printf("Informe a quantidade: ");
                scanf("%d", &quantity);
            }
        sum = sum + quantity;
        total = total + 1; 
        }
    average = (float)sum / total;
            //outro idetificador 

    }while (category =='A' || category == 'B' || category == 'C');
    printf(" A media dos dos produtos é %.2f \n", average );
    return 0;    
}

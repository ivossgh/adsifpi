#include <stdio.h>
#include <string.h>

int main(){
    double produto;
    int i = 1;
    double soma = 0, valor_final;
    char desconto[4];


    printf("Bem vindo ao nosso sistema de caixa!!!\n");

    while (1){
        printf("Digite o valor do produto: ", i);
        scanf("%lf", &produto);
        soma += produto;
        i++;

        printf("Deseja aproveitar seu desconto? (SIM/NÄO) ", i);
        scanf("%s", desconto);
   
        if (strcmp(desconto, "sim")== 0){
            valor_final = produto * 0.90;
            printf("O valor do produto foi de: R$ %.2lf\n e o valor com desconto foi de R$ %.2lf\n", produto, valor_final);
        }else{
            printf("O valor do produto foi de: R$ %.2lf\n", produto);
        }      
    }
    printf("\nTotal registrado no caixa: R$ %.2lf\n", valor_final);
    return 0; 
}
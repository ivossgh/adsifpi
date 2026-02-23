#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1>num2){
        printf("O primeiro numero é maior %d");
    }
    else if (num2 > num1){
        printf("O segundo numero é maior %d");
    }
    else if (num3 > num1 && num3 > num2){
        printf("O terceiro numero é maior %d");
    }
    else if (num1 == num2){
        printf("Os numeros são iguais %d");
    }
    return 0;
}
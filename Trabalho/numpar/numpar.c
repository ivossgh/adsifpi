#include <stdio.h>

int num;
int i;
int par = 0;
int impar = 0;
int main(){
    while (i < 10){
        printf("Digite um numero:");
        scanf("%d", &num);
        if (num % 2 == 0){
            printf("O numero %d e par\n", num);
            par++;
        }
        else {
            printf("O numero %d e impar\n", num);
            impar++;
        }
        i++;
        printf("Quantidade de numeros pares: %d\n", par);
        printf("Quantidade de numeros impares: %d\n", impar);

    }
}


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("Numero Positivo");
    } else if (num <= 0){
        printf("Numero Negativo");
    }
}


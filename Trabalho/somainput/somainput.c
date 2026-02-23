#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        soma = soma + num; 

    } while (num != 0);

    printf("\nA soma dos numeros digitados e: %d\n", soma);

    return 0}

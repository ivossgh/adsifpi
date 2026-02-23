#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    int maior, menor;
    printf("Digite o 1º numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    for (i = 2; i <= 5; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("\nO maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}

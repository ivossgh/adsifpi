#include <stdio.h>

int main() {
    int i = 0, soma = 0, x;

    while (i < 5) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &x);
        soma += x;
        i++;
    }

    printf("\nA soma dos 5 numeros digitados e: %d\n", soma);

    return 0;
}

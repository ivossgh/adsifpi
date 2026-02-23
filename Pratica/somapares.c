#include <stdio.h>

int main() {
    int num, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {  // verifica se é par
            soma += num;
        }
    }

    printf("A soma dos números pares é: %d\n", soma);

    return 0;
}

#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 0; i <= 100; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);
    return 0;
}

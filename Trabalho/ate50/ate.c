#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;

    printf("Numeros pares de 1 a 50:\n");

    while (i <= 50) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}

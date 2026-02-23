#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    printf("Digite o segundo numero: ");
    scanf("%d", &num1);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num2);

    if (num > num1 && num > num2) {
        printf("O maior numero e: %d\n", num);
    } else if (num1 > num && num1 > num2) {
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1 && num2 > num) {
        printf("O maior numero e: %d\n", num2);
    } else {
        printf("Fim do Progerma.\n");
    }

    return 0;
}

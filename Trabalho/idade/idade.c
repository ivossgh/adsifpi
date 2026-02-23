#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade\n");
    } else if (idade >= 60) {
        printf("O senhor(a) é idoso(a)\n");
    } else {
        printf("Você é maior de idade\n");
    }

    return 0;
}


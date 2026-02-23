#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite sua senha: ");
        scanf("%d", &senha);
    } while (senha != 1234);

    printf("Senha correta! Acesso liberado.\n");

    return 0;
}

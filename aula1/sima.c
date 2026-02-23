#include <stdio.h> //→ inclui a biblioteca padrão de entrada/saída.

int main(){
    int a;
    int b;
    int soma;
    printf("Digite o primeiro numero interio:\n");
    scanf("%d", &a); //→ lê um número inteiro, o d é o especificador de formato para inteiros e armazena na variável 'a'.
    printf("Digite o segundo numero inteiro:\n");
    scanf("%d", &b); //→ lê um número inteiro, o d é o especificador de formato para inteiros e armazena na variável 'b'.

    soma = a + b;
    printf("A soma dos numeros e: %d\n", soma);

    return 0; // indica que o programa terminou com sucesso.
}
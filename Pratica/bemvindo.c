#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[15];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá %s, Sua idade é: %d",nome, idade);

    return 0;
}

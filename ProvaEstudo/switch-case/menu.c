#include <stdio.h>

int main(){
    int numero;

    printf("Escolha um numero de 1 a 3: ");
    scanf("%d", &numero);
    switch(numero){
        case 1:
            printf("Falar com Atendente.\n");
            break;
        case 2:
            printf("Falar com Time de Vendas.\n");
            break;
        case 3:
            printf("Falar com Suporte Tecnico.\n");
            break;
        default:
            printf("Digite um valor valido!!!");
            break;
    }
}
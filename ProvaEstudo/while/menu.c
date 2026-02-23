#include <stdio.h>

int main(){
    int i = 0;

    while(i !=3){
        printf("Escolha um numero de 1 a 3: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                printf("Falar com atendimento.\n");
                break;
            case 2:
                printf("Falar com suporte tecnico.\n");
                break;
            case 3:
                printf("Encerrar...");
                break;
            default:
                printf("Opçäo Invalida...");
        }
    }
}
#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua nota");
    scanf("%d", &nota);

    if (nota >= 7){
        printf("Sua nota foi de %d\n Voce está Aprovado", nota);
    }else{
        printf("Sua nota foi de %d\n Voce está Reprovado", nota);
    }
    return 0;
}
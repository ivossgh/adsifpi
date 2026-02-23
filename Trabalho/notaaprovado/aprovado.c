#include <stdio.h>


int main(){
    double nota;
    printf("igite sua nota: ");
    scanf("%lf", &nota);
    if (nota >= 7.0){
        printf("Sua nota foi %.2f. Voce foi aprovado", nota);
    }
    else {
        printf("Sua nota foi %.2f. Voce foi reprovado", nota);
    }
    return 0;
}
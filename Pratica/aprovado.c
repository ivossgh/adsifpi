#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    int n2;
    int media;

    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);

    media = (n1 + n2) / 2;
    if (media >= 6){
        printf("Sua media foi de : %d\n" "Aprovado!\n", media);
    } else {
        printf("Sua media foi : %d\n Reprovado!\n", media);
    }
              
    return 0;
    
}


#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[5];
    int i;
    printf("Digite as notas dos estudantes");
    for (i = 0; i <5; i++){
        printf("Nota do estudante %d:",i);
        scanf("%f",&notas[i]);
    }
    float media = 0;
    for(i = 0; i < 5; i++)
        media = media + notas[i];
    media = media / 5;

    for(i = 0; i <5; i++)
        if(notas[i] > media)
            printf("Notas: %f", notas[i]);
    return 0;
}
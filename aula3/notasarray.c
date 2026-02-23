#include <stdio.h>

int i;
int notas[3];
int main(){
    printf("Digite 3 notas:\n");
    for (i = 0; i < 3; i++){
        printf("Nota %d: ", i+1);
        scanf("%d", &notas[i]);
    }
    
    printf("Minha segunda nota: %d\n", notas[1]);
    return 0;
}
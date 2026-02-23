#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero para saber o dobro dele: ");
    scanf("%d", &num);

    int dobro = num * 2;
    printf("O dobro do seu numero é %d", dobro);

    return 0;

}
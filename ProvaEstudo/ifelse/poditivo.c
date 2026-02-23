#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0){
        printf("Seu numero digitado foi: %d\n, É negativo...", num);
    }else{
        printf("Seu numero digitado foi: %d\n, É Positivo...", num);
    }
    return 0;
}
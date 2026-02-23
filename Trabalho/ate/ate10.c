#include <stdio.h>


int num;
int i = 0;
int main(){
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num != i){
        printf("%d", i);
        i++;
    }
}

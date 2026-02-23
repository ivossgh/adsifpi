#include <stdio.h>

int num;
int i;
int main(){
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);
    for (i =1; i <=10; i++){
        printf("%d + %d = %d\n", num, i, num + i);
    }
}
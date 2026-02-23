#include <stdio.h>

int i = 0;
int num1, num2;
int soma;

int main(){
    while (i <5){
        printf("Digite um valor:\n ");
        scanf("%d", &num1);
        printf("DIgite o segundo numero :\n ");
        scanf("%d", &num2);
        soma +=num1 + num2; // soma = soma + num1 + num2
        i++;

        printf("A soma atual é: %d\n", soma);
    }

}
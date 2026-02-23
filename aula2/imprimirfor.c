#include <stdio.h>

int i = 0;
int soma = 0;
int main(){
    for (i = 1; i<=10; i++){
        if (i == 5){
            continue; // Pula a iteração quando i é igual a 5
        }
        soma += i;
        printf("%d\n", i); 
    }
}

int i = 0;
int soma = 0;
int main(){
    for (i = 1; i<=10; i++){
        if (i == 5)
            break;; // Sai do loop quando i é igual a 5
        soma += i;
        printf("%d\n", i); 
    }
}
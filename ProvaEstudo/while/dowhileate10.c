#include <stdio.h>
//Executa ao menos uma vez com Do, pelo fato dele vir antes

int main(){
    int num = 1;

    do { //Bloco de comando
        printf("%d", num);
        num++; //Controle/atualizcao
    }
    while (num <=10); //Condicao
}
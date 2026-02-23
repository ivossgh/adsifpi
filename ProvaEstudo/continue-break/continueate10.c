#include <stdio.h>

int main(){
    int i;
    //Inicializacao + condicao + incremento + bloco de comandos ao dar enter
    for (i=1; i<=10; i++){
        if (i == 5){
            continue;;
        }
        printf("%d", i); //fora do bloco do continue 
    }
}
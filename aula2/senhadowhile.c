#include <stdio.h>


// Usando do while
int main(){
int senha;
do {
    printf("Digite a senha:\n");
    scanf("%d", &senha);
}while (senha !=1234);
    printf("Senha correta! Acesso permitido.\n");
return 0;   
}

// Usando while
int main(){
    int senha;
    while (senha !=1234){
    printf("Digite a senha:\n");
    scanf("%d", &senha);
    }
    printf("Senha correta! Acesso permitido.\n");
return 0;   
}
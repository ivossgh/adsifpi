#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo: \n");
    fgets(s, sizeof(s), stdin);
    printf("resultado: %s\n", s);

    printf("Digite algo: \n");
    fgets(s, sizeof(s), stdin);
    printf("resultado: %s\n\n", s);

    return 0;
}
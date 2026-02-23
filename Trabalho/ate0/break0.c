// percorrendo array
#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista[5] = {3,51,18,2,45};
    int i, soma = 0;
    for (i = 0; i <5; i++)
        soma = soma + lista[i];
    printf ("soma = %d", soma);
    return 0;
}

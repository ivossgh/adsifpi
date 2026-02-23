#include <stdio.h>

int A[5] = {12, 3, 45, 7, 23};


int main(){ 
    int maior = A[0];
    for (int i = 1; i < 5; i++)
        if (A[i] > maior) maior = A[i];
        printf("Maior valor = %d\n", maior);

    return 0;
}

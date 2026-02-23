#include <stdio.h>  

int matriz[3][4];
int linhas = 3;
int colunas = 4;
int i, j;

int main(){
    matriz[1][1] = 9;
    matriz[1][2] = 7;
    matriz[2][3] = 5;
    matriz[3][4] = 9;
    printf("Elemento de cada linha e coluna: %d %d %d %d\n", matriz[1][1], matriz[1][2], matriz[2][3], matriz[3][4]);
    for (int i = 0; i< linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}

// Explicação:
// Este código declara uma matriz 2D de inteiros com 3 linhas e 4 colunas.
// Ele atribui valores a alguns elementos específicos da matriz e os imprime.
// Em seguida, ele percorre toda a matriz usando loops aninhados para imprimir cada elemento com seus índices correspondentes.

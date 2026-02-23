#include <stdio.h>

double A[2][3] = { {1.0, 2.0, 3.0}, {4.0, 5.0, 6.0} };
double B[2][3] = { {6.0, 5.0, 4.0}, {3.0, 2.0, 1.0} };
double S[2][3];
int main() 
    // Soma das matrizes A e B, armazenando o resultado em S
for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
        S[i][j] = A[i][j] + B[i][j];

#include <stdio.h>

int main(){
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;

    printf("endereco em p2: %p\n", p2);
    printf("endereco em *p2: %p\n", *p2);
    printf("endereco em **p2: %d\n", **p2);
    

}
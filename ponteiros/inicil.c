#include <stdio.h>

int main(void){
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;

    pp = &p2;
    printf("endereco pp: %p \n", pp);

    pp = &p1;
    printf("endereco pp: %p \n", pp);

    pp = p1;
    printf("endereco pp: %d \n",*(int*)pp);

    return 0;
}
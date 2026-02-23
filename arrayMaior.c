#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, a[5] = {1,25,345,4,50};
    int max = a[0];

    for (i=1; i<5; i++){
        if(max <a[i])
            max = a[i];
    }
    printf("Maior = %d", max);
    return 0;
}
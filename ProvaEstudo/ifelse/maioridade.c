#include <stdio.h>

int main(){
int idade1, idade2, idade3;

    printf("Descubra quem já pode namorar: ");

    printf("Digite sua idade: ");
    scanf("%d", &idade1);
    printf("Digite sua idade: ");
    scanf("%d", &idade2);
    printf("Digite sua idade: ");
    scanf("%d", &idade3);
    

    if (idade1 > idade2 && idade1 > idade3){
        printf("Primeiro numero é maior %d", idade1);
    }
    else if(idade2 > idade1 &&  idade2 > idade3){
        printf("Primeiro numero é maior %d", idade2);
    }else{
        printf("Terceiro numero é maior %d", idade3);
    }
    return 0;
}
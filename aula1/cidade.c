#include <stdio.h>

int main(){
    char cidade[30];
    float temperatura;

    printf("Digite o nome da Cidade\n");
    scanf("%s", cidade); // lê uma string (nome da cidade) e armazena na variável 'cidade', pois %s é o especificador de formato para strings.
    printf("Digite a temperaturda atual:\n");
    scanf("%f", &temperatura); // lê um número de ponto flutuante (temperatura) e armazena na variável 'temperatura', pois %f é o especificador de formato para floats.
    printf("A temperatura atual da cidade de %s é de %.2f graus Celsius\n", cidade, temperatura); // imprime a mensagem com o nome da cidade e a temperatura formatada com duas casas decimais.
}
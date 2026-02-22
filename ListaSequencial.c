//Arquivo listaSequencial.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

// Modelo da minha lista, nela existe int qtd 
struct  li{
   int qtd; // amazena quantos elementos estão ocupados
   struct numeros dados [MAX]; // meu vetor onde os números ficam
};

//Funçao que cria a lista, ponteiro pra lista.
Lista *cria_lista(){
   Lista * li; // Declara um ponteiro para lista, ele se chama li. AInda nao alocamos memoria para ele
   li=(Lista*) malloc(sizeof(struct li)); // Reserva memória suficiente para: int qtd, dados[MAX]
   // SO agora li tem espaço na memoria o sufuciente para guardar as variaveis
   
   // A lista começa vazia
   if(li!=NULL) //Se a memória foi alocada com sucesso, inicializa a quantidade de elementos como 0
         li->qtd=0;
   return li;
}

//funçao que libera a lista;
// li meu ponteiro para a lista, ou seja, o endereço onde a lista está alocada na memória.
void libera_lista(Lista* li){
// aqui libero a memoria que foi reservada com malloc na funcao acima
   free(li);
}

//funcao que retorna o tamanho da lista
int tamanho_lista(Lista* li){
   // Verifica se a lista existe
   if(li==NULL)
   return -1;
   else
   // Retorna o tamanho lógico da lista
   return li->qtd;
}

//função que verifica se a lista está cheia
// Lista* li um ponteiro para a lista criada com cria_lista()
int lista_cheia(Lista* li) {
// Verifica se a lista existe
   if(li==NULL)
       return -1; // Quando e se a lista não existe, a função retorna -1 como código de erro.

// Se a lista existe, a função devolve:
    // quantidade real de elementos armazenados
    // é o número de posições ocupadas
    // Exemplo: dados: [33, 23, 17, _, _] qtd = 3 tamanho_lista → 3
   return (li->qtd==MAX);
}

//funçao que verifica se a lista esta vazia
int lista_vazia(Lista*li){
// Verifica se a lista existe
   if(li==NULL)
    // Se a lista não existe, a função retorna -1 como código de erro.
           return -1;
    // Se a lista for = 0, ou seja vazia a função retorna 1 (verdadeiro)
    // Se a lista tiver 1 ou mais elementos, a função retorna 0 (falso)
       return (li->qtd==0);
}

//Essa função faz inserção no início de uma lista sequencial armazenada em vetor. 
//Como o vetor não “abre espaço” sozinho, ela precisa deslocar todos os elementos 
//uma posição para a direita antes de colocar o novo no índice 0.

// Lista* li é o ponteiro para a lista onde quero inserir o número
// struct numeros n → o elemento que você quer inserir
// Possiveis retornos: 0(erro) ou 1(sucesso)
int insere_lista_inicio(Lista* li, struct numeros n) {
    // 1. Verifica se a lista existe
   if (li == NULL)
        // Se nao existe retorna 0
       return 0;
    // 2. Verifica se a lista está cheia
   if (lista_cheia(li))
        // Se estiver cheia, retorna 0
       return 0;
   int i;
    //Começa do último elemento válido (qtd - 1)
    //Copia cada elemento para uma posição à direita (i + 1)
    //Faz isso de trás pra frente para não sobrescrever dados
   for (i = li->qtd - 1; i >= 0; i--)
       li->dados[i + 1] = li->dados[i];
    // Agora o índice 0 está livre para receber o novo número que vou passar
   li->dados[0] = n;
   // A lista agora tem um elemento a mais. por que eu adcionei
   li->qtd++;
   return 1;
    // Exemplos: Antes (qtd = 3)
    // índice: 0   1   2   3   4 
    // dados: [A] [B] [C] [_] [_]
    // Após o loop:
    // índice: 0   1   2   3   4
    //dados: [_] [A] [B] [C] [_]
    // Agora o índice 0 ficou livre.
}

//Essa é a versão mais simples e eficiente de inserção na sua lista sequencial: 
//coloca o elemento na próxima posição livre do vetor.
int insere_lista_final(Lista * li, struct numeros n){
   if(li==NULL)
       return 0;
   if (lista_cheia(li))
       return 0;
// qtd indica quantos elementos já existe. Portanto, o próximo índice livre é exatamente qtd
// Exemplo:
// dados: [33, 23, 17, _, _]
// qtd = 3 → novo elemento vai para índice 3
// Nada de deslocamento, nada de cópia — só grava no fim.
   li->dados[li->qtd] = n;
   li-> qtd++;
   return 1;
   //Operação concluída.
}

//funçao que remove no começo da lista
int remove_lista_inicio(Lista* li){
   if(li==NULL)
       return 0;
   if(li->qtd==0)
       return 0;
// vamos deslocar todos os elementos para a esquerda
// sobrescrever cada posição com o elemento da direita.
   int k=0;
// Exemplos: Antes (qtd = 4)
// índice: 0   1   2   3   4
// dados: [A] [B] [C] [D] [_]
// Depois do loop:
// índice: 0   1   2   3   4
// dados: [B] [C] [D] [D] [_]
   for (k=0; k<li->qtd-1;k++)
       li->dados[k]=li->dados[k+1];
// Agora a lista passa a considerar só as primeiras qtd posições:
// qtd = 3
// dados válidos: [B] [C] [D]
   li->qtd--;
   return 1;
}

//função que remove no final da lista
int remove_lista_final(Lista* li){
   if(li==NULL)
       return 0;
   if(li->qtd==0)
       return 0;

// Isso faz o último elemento deixar de ser considerado parte da lista.
// Antes dados: [33, 23, 17, _, _] - qtd = 3
// Depois dados: [33, 23, 17, _, _] qtd = 2
// Agora o 17 continua na memória, mas não pertence mais à lista.
   li->qtd--;
   return 1;
}

//imprimi lista
// percorre apenas as posições ocupadas e imprime o número armazenado em cada uma delas.
void imprime_lista(Lista *li){
// Nosso contador começa com 0 meu indice inicial da lista
// i < li->qtd O loop só percorre as posições realmente ocupadas da lista.
// se qtd = 3 o loop roda com: i = 0, 1, 2 e para quando i chegar em 3, que é o índice do próximo espaço livre.
// i++ A cada repetição, o índice avança para a próxima posição.
   for(int i=0;i<li->qtd; i++)
// Pego o numero armazenado na posicao i da minha lista e mostro ele
// li->dados[i] é do tipo struct numeros, então para acessar o número em si, uso .numero
// o resultado é que ele imprime cada numero armazenado na lista
// Exemplo: 
//i	    valor acessado	            impresso
//0	    li->dados[0].numero → 10	10,
       printf("%d,",li->dados[i].numero);
}


// Função que insere em uma posição específica (no "meio")
int insere_lista_meio(Lista* li, struct numeros n, int pos) {
   // 1. Verificações de segurança básicas
   if (li == NULL) return 0;
   if (lista_cheia(li)) return 0;
   // 2. Verifico se a posição é válida.
   // A posição deve ser maior ou igual a 0 e menor ou igual a qtd.
   // Se pos == qtd, seria uma inserção no final, o que é permitido.
   if (pos < 0 || pos > li->qtd) return 0;

   // 3. O LOOP DE DESLOCAMENTO (O "Shift Right")
   // Aqui eu percorro a lista de trás para frente, do último elemento (li->qtd - 1)
   // li->qtd  é a quantidade total de itens.
   // até a posição onde quero inserir.
   // Subtraímos 1 porque, em programação, a contagem das posições (índices) começa em 0. 
   // Se você tem 5 itens, o último está na posição 4.
   // Faço o elemento da frente (i+1) receber o elemento atual (i).
   int i;
   // Abre espaço na posição desejada
   // A Condição de Parada (i >= pos)
   // O laço for vai continuar executando enquanto ainda não chegamos na posição onde queremos inserir 
   // o novo dado (pos). Ele "anda de trás para frente" até alcançar o buraco que queremos criar.
   for (i = li->qtd - 1; i >= pos; i--) {
    // O Deslocamento (li->dados[i + 1] = li->dados[i])
    // Esta é a parte crucial. O código pega o valor que está na posição atual i e o joga para a posição da frente (i + 1).
    // Por que começar do fim? Se você começasse do início, você sobrescreveria o valor do vizinho antes de copiá-lo, 
    // causando um "efeito dominó" onde todos os números virariam o mesmo valor. Começando do fim, você garante que a posição da frente esteja sempre "livre" para receber o dado.
       li->dados[i + 1] = li->dados[i];
   }
   // O Caminho de Volta (i--)
   // A cada repetição, o i diminui. Isso faz com que o código processe a lista da direita para a esquerda, 
   // empurrando cada item um "passo" para o lado.
   // 4. Agora que abri o espaço na posição 'pos', insiro o novo número
   li->dados[pos] = n;
   // 5. Atualizo a quantidade de elementos na lista
   li->qtd++;
   return 1;
}

// Funções Adicionadas->
// Função que remove de uma posição específica
int remove_lista_meio(Lista* li, int pos) {
   // 1. Verificações de segurança
   if (li == NULL) return 0;
   if (lista_vazia(li)) return 0; // Se estiver vazia, não tem o que tirar
   // 2. Verifico se a posição existe.
   // Diferente da inserção, aqui pos não pode ser igual a qtd (pois esse índice não existe ainda)
   if (pos < 0 || pos >= li->qtd) return 0;
   // 3. O LOOP DE DESLOCAMENTO (O "Shift Left")
   // Aqui eu percorro da posição que quero remover até o penúltimo elemento.
   // Faço o elemento atual (k) receber o valor do próximo (k+1).
   // Isso "esmaga" o valor que estava na posição 'pos'.
   int k;
   // Começa da posição removida
   for (k = pos; k < li->qtd - 1; k++) {
       li->dados[k] = li->dados[k + 1];
   }

   // 4. Diminuo o tamanho da lista (o último elemento lógico agora é "lixo" e será ignorado)
   li->qtd--;
   return 1;
}



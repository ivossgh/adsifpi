//arquivo ListaSequencial.h
# define MAX 4 // tamanho maximo da minha lista
struct numeros{ // Minha variavel onde amazeno diferentes tipos primitivos, Hoje é só um número
   int numero;
     
};
// Existe uma struct chamada li, mas quem usa vai chamar de Lista
typedef struct li Lista;


Lista* cria_lista(); // Declara uma função que retorna um ponteiro para Lista
void  libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
void imprime_lista(Lista *li);
int insere_lista_inicio(Lista* li, struct numeros n);
int insere_lista_final(Lista * li, struct numeros n);
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
// Adicionei estas duas linhas:
// O que a função recebe, O que ela retorna
int insere_lista_meio(Lista* li, struct numeros n, int pos);
int remove_lista_meio(Lista* li, int pos);
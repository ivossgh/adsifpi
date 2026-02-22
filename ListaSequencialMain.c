// Meu Menu


#include <stdio.h>
#include <stdlib.h> //permite usar malloc e free
#include "ListaSequencial.h"


int main(void) {
   Lista *li = NULL; // ponteiro para uma lista. o null = a lista ainda não existe
   int continuar = 1; // Enquanto for diferente de 0, o programa continua
   struct numeros num; // minha variavel
   int posicao; // Guarda a posição onde o usuário quer inserir/remover


   // Início do loop do menu
   do {
       printf("\n\tMenu de Opcao\n\n");
       printf("1. Cria Lista \n");
       printf("2. Libera lista\n");
       printf("3. Inserir inicio\n");
       printf("4. Inserir fim\n");
       printf("5. Remover inicio\n");
       printf("6. Remover fim\n");
       printf("7. Imprimir lista\n");
       printf("8. Status (Cheia/Vazia)\n");
       // Novas opções que eu criei:
       printf("9. Inserir no MEIO\n");
       printf("10. Remover do MEIO\n");
       printf("0. Sair\n");




       // continuar agora guarda a opção escolhida, se o user digitar 0. encerra
       // e aguarda a escolha do user
       scanf("%d", &continuar);
      
       // Limpeza de tela portável simples
       // system("cls || clear");


       switch(continuar) { // Decide o que fazer com base na opção digitada
           case 1:
               li = cria_lista(); // Chama a função que aloca memória
               // Antes: li = NULL. Depois: li → [qtd=0 | dados]
               printf("Lista criada!\n");
               break;


           case 2:
               if(li != NULL) { // Segurança: só libera se existir
                   libera_lista(li);
                   li = NULL; // Evita usar um ponteiro inválido
                   printf("Lista liberada!\n");
               }
               break;


           case 3:
               printf("Digite o numero: ");
               // O usuário digita um número
               // Ele fica guardado em num.numero
               scanf("%d", &num.numero);
               // Envia: o ponteiro da lista. e o o elemento a ser inserido
               if(insere_lista_inicio(li, num)) printf("Sucesso!\n");
               else printf("Erro!\n");
               break;


           case 4:
               printf("Digite o numero: ");
               scanf("%d", &num.numero);
               if(insere_lista_final(li, num)) printf("Sucesso!\n");
               else printf("Erro!\n");
               break;
              
           case 5:
               if(remove_lista_inicio(li)) printf("Removido inicio!\n");
               else printf("Erro!\n");
               break;


           case 6:
               if(remove_lista_final(li)) printf("Removido final!\n");
               else printf("Erro!\n");
               break;


           case 7:
               imprime_lista(li);
               break;


           case 8:
               if(lista_cheia(li)) printf("Lista Cheia!\n");
               else printf("Lista com espaco.\n");
               break;


           // --- AQUI ESTAVAM OS PONTOS CRÍTICOS ---
           // Novas opções que eu criei:
           case 9:                 // No main, utilizei apenas a função tamanho_lista(li) para saber o limite dos índices.
                                   //Se tentar acessar li->qtd dentro do main, o compilador bloqueará com erro de tipo incompleto,
                                   //pois ele foi desenhado para não saber o que tem dentro de li.
               // Note que uso tamanho_lista(li) e NAO li->qtd
               printf("Posicao (0 a %d): ", tamanho_lista(li));
               scanf("%d", &posicao);
               printf("Numero: ");
               scanf("%d", &num.numero);
              
               if(insere_lista_meio(li, num, posicao))
                   printf("Inserido no meio com sucesso!\n");
               else
                   printf("Erro ao inserir (posicao invalida ou lista cheia)\n");
               break;


           case 10:
               // Note que uso tamanho_lista(li) e NAO li->qtd
               printf("Posicao para remover (0 a %d): ", tamanho_lista(li) - 1);
               scanf("%d", &posicao);
              
               if(remove_lista_meio(li, posicao))
                   printf("Removido do meio com sucesso!\n");
               else
                   printf("Erro ao remover (posicao invalida)\n");
               break;


           case 0:
               if(li != NULL) libera_lista(li);
               break;
              
           default:
               printf("Opcao invalida\n");
       }
   } while(continuar != 0);


   return 0;
}

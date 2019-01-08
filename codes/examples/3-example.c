/*----------Importacao de bibliotecas----------*/
#include <stdio.h>


/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/



/*----------Declaracoes de prototipos de funcoes----------*/
void menu();


int main()
{
  menu();

  return 0;
}


/*----------Implementacao das funcoes declaradas acima----------*/
void menu(){
  char escolha;
  
  do{
    printf("Qual é o instituto mais amor dessa Unicamp?\n\
  1 - IMECC\n\
  2 - IC\n\
  3 - FEEC\n\
  4 - IFGW (MEDIA 7)\n");

    scanf(" %c", &escolha);
    switch (escolha){
      case '3':
      printf("Correto!!!\n");
      break;

      case '2':
      case '1':
      case '4':
      printf("Escolha Errada :( Falta amor em ti\n");
      break;

      default:
      printf("Escolha Invalida. Tente Novamente!!!\n");
    }
  }while(escolha >= '5' || escolha <= '0');

  return;
}
/*----------Importacao de bibliotecas----------*/
#include <stdio.h> // Biblioteca com funcoes de entrada e saida



/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/



/*----------Declaracoes de prototipos de funcoes----------*/
void funcao1();
void print_0_100000();

int main() // funcao principal de todo programa em C
{  
  funcao1();

  print_0_100000();
  return 0; // Retornar 0 indica que o programa encerrou normalmente (Outros valores podem ser retornados para indicar erros. Exemplo: 1)
}

/*----------Implementacao das funcoes declaradas acima----------*/
void funcao1(){
  char i;
  
  for (i = 65; i <= 90; i++){
    printf("%c", i);
  }
  printf("\n");

  return;
}

/*Esta funcao possui um erro, corrija!!!*/
void print_0_100000(){
  short i;

  for(i = 0; i < 100000; i++)
    printf("%d ", i);
  
  return;
}
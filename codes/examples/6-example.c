/*----------Importacao de bibliotecas----------*/
#include <stdio.h>
#include <string.h> /*strlen*/

/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/



/*----------Declaracoes de prototipos de funcoes----------*/
void funcao(char *, char *);


int main()
{
  char input[30], output[30];
  int len;

  printf("INPUT: ");
  scanf("%[^\n]s", input); /*Recebe uma sequencia de caracteres ate encontrar uma quebra de linha*/

  funcao(input, output);
  printf("OUTPUT: %s\n", output);

  return 0;
}


/*----------Implementacao das funcoes declaradas acima----------*/
void funcao(char *input, char *output){
  int len = strlen(input);
  
  for (int i = 0, j = len -1; i < len; i++, j--){
    output[i] = input[j];
  }

  return;
}
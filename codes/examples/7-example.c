/*----------Importacao de bibliotecas----------*/
#include <stdio.h>
#include <string.h> /*strlen*/


/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/
#define MAX_COLS 100


/*----------Declaracoes de prototipos de funcoes----------*/
void funcao(char *, char *);
int count_words(char text[][MAX_COLS], int lines);
int read_text(char text[][MAX_COLS]);


int main()
{
  char input[30], output[30], text[50][MAX_COLS];
  int len;

  printf("INPUT: ");
  scanf("%[^\n]s", input); /*Recebe uma sequencia de caracteres ate encontrar uma quebra de linha*/
  getchar(); /*Consome o '\n' do buffer*/

  funcao(input, output);
  printf("OUTPUT: %s\n", output);

  /*Conta palavras*/
  
  int lines = read_text(text);

  printf("Text: \n\n");
  for (int i = 0; i < lines; i++){
    printf("%d: %s\n",i+1, text[i]);
  }

  printf("\n%d words counted\n", count_words(text, lines));

  return 0;
}


/*----------Implementacao das funcoes declaradas acima----------*/
void funcao(char *input, char *output){
  int len = strlen(input);
  
  for (int i = 0, j = len -1; i < len; i++, j--){
    output[i] = input[j];
  }
  output[len] = 0;
  return;
}

int read_text(char text[][MAX_COLS]){
  int i = 0;
  char c = 0;

  while(1){
    int j = 0;
    c = 0;
    while (scanf("%c", &c) != EOF && c != '\n'){
      text[i][j] = c;
      j++;
    }
    text[i][j] = '\0';
    
    if (c != '\n')
      break;

    i++;
  }

  return i;
}

/*Implemente uma funcao que conte quantas palavras possui um texto*/
int count_words(char text[][MAX_COLS], int lines){
  /*
  *
  * CODE
  * 
  * */

 return 0;
}
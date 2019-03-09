/*----------Importacao de bibliotecas----------*/
#include <stdio.h>
#include <stdlib.h> /*atoi*/

/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/
#define MAX 3


/*----------Declaracoes de prototipos de funcoes----------*/
int le_vetor(int *);
void mul_mat(int m[][MAX], int, int );
void imprime_vetor(int *, int);


int main()
{
  int m[MAX][MAX];

  for (int i = 0; i < MAX; i++){
    le_vetor(m[i]);
  }

  printf("\nInput:\n");
  for (int i = 0; i < MAX; i++){
    imprime_vetor(m[i], MAX);
  }

  mul_mat(m, 3, MAX);
  printf("\nOutput:\n");
  for (int i = 0; i < MAX; i++){
    imprime_vetor(m[i], MAX);
  }

  return 0;
}


/*----------Implementacao das funcoes declaradas acima----------*/
int le_vetor(int *dest){
  int i, j;
  char input[11], c;

  i = 0, j = 0;
  do{
    scanf("%c", &c);
    
    if (c >= '0' && c <= '9' && i < 10){
      input[i] = c;
      i++;
    }
    else if (c == ' ' || c == '\n'){
      if (i > 0){
        input[i] = '\0';
        dest[j] = atoi(input);
        j++;
        i = 0;
      }
    }
    else
      break;

  }while(c != '\n');

  return j;
}

void mul_mat(int m[][MAX], int fator, int dim){
  for (int i = 0; i < dim; i++)
    for (int j = 0; j < dim; j++)
      m[i][j] *= fator;
}

void imprime_vetor(int *vetor, int t){
  for (int i = 0; i < t; i++)
    printf("%3d ", vetor[i]);
  printf("\n");
}
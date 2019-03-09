/*----------Importacao de bibliotecas----------*/
#include <stdio.h>
#include <stdlib.h> /*atoi*/

/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/
#define MAX 10


/*----------Declaracoes de prototipos de funcoes----------*/
int le_vetor(int *);
void mul_vetor(int *, int, int );
void imprime_vetor(int *, int);


int main()
{
  int vetor[MAX];
  int t = le_vetor(vetor);

  mul_vetor(vetor, 3, t);
  imprime_vetor(vetor,t);

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

void mul_vetor(int *vetor, int fator, int tam){
  for (int i = 0; i < tam; i++)
    vetor[i] *= fator;
}

void imprime_vetor(int *vetor, int t){
  for (int i = 0; i < t; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}
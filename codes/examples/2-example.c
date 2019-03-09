/*----------Importacao de bibliotecas----------*/
#include <stdio.h>


/*----------Definicao de estruturas e novos tipos de dados----------*/



/*----------Definicao de constantes e variaveis globais----------*/



/*----------Declaracoes de prototipos de funcoes----------*/
void funcao1(int vector[]);
int funcao2(int num);

int main() // Funcao principal de todo programa em C
{
  int p[10];

  funcao1(p);

  for (int i = 0; i < 10; i++)
    printf("%d ", p[i]);
  printf("\n");
  
  return 0;
}

/*----------Implementacao das funcoes declaradas acima----------*/
void funcao1(int vector[]){
  int num = 2, i = 0;

  while(i < 10){
    if(funcao2(num)){
      vector[i] = num;
      i++;
    }

    num++;
  }
  
  return;
}

int funcao2(int num){
  int j = 2, res = 1;
  
  if (num < 4)
    return 1;

  do{
    if (num%j==0)
      res = 0;
    j++;

  }while(res == 1 && j < num/2);

  return res;
}
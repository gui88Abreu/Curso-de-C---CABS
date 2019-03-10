/*----------Importacao de bibliotecas----------*/
#include <stdio.h>
#include <stdlib.h>

/*----------Definicao de constantes e variaveis globais----------*/

/*----------Definicao de estruturas e novos tipos de dados----------*/

// Lista ligada
typedef struct NodeStruct
{
  char val;
  struct NodeStruct * next;
} Node;

typedef Node * node_ptr;

/*----------Declaracoes de prototipos de funcoes----------*/
char * double_vector(char *v, int n);
node_ptr alloc_node();
node_ptr create_list();
node_ptr add_to_list(node_ptr l, char c);
void print_list(node_ptr l);
void destroy_list(node_ptr l);


// Le infinitos numeros e escreve com duas tecnicas diferentes
int main()
{
  char * v, c;
  int i, n, last;
  node_ptr l;
  i = 0;

  v = (char *) malloc(sizeof(char));
  if (v == NULL)
    exit(-1);
  n = 1;

  // Com vetor
  do
  {
    scanf("%c", &c);
    v[i] = c;
    i++;
    if (i == n)
    {
      v = double_vector(v, n);
      n = 2*n;
    }
  }
  while(c != '\n');

  last = i;
  for (i = 0; i < last; i++)
    printf("%c", v[i]);
  printf("\n");

  free(v);

  // Com lista ligagada
  l = create_list();

  do
  {
    scanf("%c", &c);
    l = add_to_list(l, c);
  }
  while(c != '\n');

  print_list(l);
  printf("\n");

  destroy_list(l);

  return 0;
}

/*----------Implementacao das funcoes declaradas acima----------*/

// Dobra o numero de posições do vetor v
char * double_vector(char *v, int n)
{
    char * new;
    int i, ans;

    ans = 2*n;

    new = (char *) malloc(ans * sizeof(char));

    if (new == NULL)
      exit(-1);

    for (i = 0; i < n; i++)
      new[i] = v[i];

    free(v);

    return new;
}

// Aloca memoria para um no
node_ptr alloc_node()
{
    node_ptr n;
    n = (node_ptr) malloc(sizeof(Node));
    if (n == NULL)
      exit(-1);

    return n;
}

// Cria lista ligada
node_ptr create_list()
{
  return NULL;
}

// Adiciona elemento c em lista;
node_ptr add_to_list(node_ptr l, char c)
{
  node_ptr new;

  new = alloc_node();
  new->val = c;

  if (l == NULL)
  {
    new->next = NULL;
    return new;
  }
  else
  {
    new->next = l;
    return new;
  }
}

void print_list(node_ptr l)
{
  if (l != NULL)
  {
    if (l->next != NULL)
      print_list(l->next);
    printf("%c", l->val);
  }
}

void destroy_list(node_ptr l)
{
  if (l == NULL)
    return;
  else if (l->next != NULL)
    destroy_list(l->next);

  free(l);
}


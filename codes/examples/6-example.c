/*----------Importacao de bibliotecas----------*/
#include <stdlib.h>
#include <stdio.h>



/*----------Definicao de constantes e variaveis globais----------*/
#define MAX 128



/*----------Definicao de estruturas e novos tipos de dados----------*/
struct Image_ppm_format{
  int Imax;
  int width;
  int height;
  int array[3][MAX][MAX];
  char *name;
};

typedef struct Image_ppm_format ppm_img;



/*----------Declaracoes de prototipos de funcoes----------*/
int open_img(char *arqEntrada, int img[][MAX][MAX], int *width, int *height, int *Imax);
void save_img(char *file_name, int img[][MAX][MAX], int width, int height, int Imax);
void not_img(ppm_img *input, ppm_img *output);
void blur_img(ppm_img *input, ppm_img *output);

int main(int argc, char **argv)
{
  ppm_img input_img, output_img;
  input_img.name = argv[1];
  output_img.name = argv[2];

  open_img(input_img.name, input_img.array, &input_img.width, &input_img.height, &input_img.Imax);
  not_img(&input_img, &output_img);
  save_img(output_img.name, output_img.array, input_img.width, input_img.height, input_img.Imax);
  return 0;
}


/*----------Implementacao das funcoes declaradas acima----------*/
int open_img(char *arqEntrada, int img[][MAX][MAX], int *width, int *height, int *Imax){
  FILE *p;
  int i = 0, j = 0, ok = 0;/*ok verifica se foi lido a quantidade correta de valores da imagem */
  char type[3];/*variável que armazena o tipo de arquivo que foi aberto, ASCII ou binario*/

  p = fopen(arqEntrada, "r");

  if (p!=NULL){

    fscanf(p,"%s %d %d %d", type, width, height, Imax);/*width e height são as variáveis que armazenam a largura e altura da imagem*/
                                                          /*Imax é o valor máximo de cada pixel da imagem*/
    while (fscanf(p,"%d %d %d", &img[0][i][j], &img[1][i][j], &img[2][i][j])!=EOF){

      j++;

      if (j == *width){/*Caso o programa já tenha lido a linha inteira da imagem, ele pula para a outra*/
        j = 0;
        i++;
      }

    }

    fclose(p);

    if (i == *height)
      ok = 1;

  }
  else{
    printf("\nERRO ao abrir o arquivo %s\n", arqEntrada);
  }

  return ok;
}

void save_img(char *arqSaida, int img[][MAX][MAX], int width, int height, int Imax){
  FILE *p;
  int i,j;

  p = fopen(arqSaida, "w");

  if (p!=NULL){
      
    fprintf(p, "P3\n%d %d\n%d\n", width, height, Imax);

    for(i=0; i<height; i++){
      for (j=0;j<width; j++){
        fprintf(p, "%d %d %d ", img[0][i][j], img[1][i][j], img[2][i][j]);
        if (j == width -1)
          fprintf(p, "\n");
      }
    }

    fclose(p);
  }
  else{
    printf("\n\nERRO ao abrir arquivo %s no modo escrita\n\n",arqSaida);
  }
}

void not_img(ppm_img *input, ppm_img *output){
  for (int i =0; i < input->height; i++){
    for (int j = 0; j < input->width; j++){
      output->array[0][i][j] = input->Imax - input->array[0][i][j];
      output->array[1][i][j] = input->Imax - input->array[1][i][j];
      output->array[2][i][j] = input->Imax - input->array[2][i][j];
    }
  }

  return;
}


/*Implemente uma funcao que borre uma imagem.*/
void blur_img(ppm_img *input, ppm_img *output){
  
  return;
}
#include <stdio.h> // Biblioteca com funcoes de entrada e saida

int    // Tipo de retorno da funcao main()
main() // Funcao principal de todo programa em C
{
  int num; // Em C as variaveis sao declaradas antes de serem usadas

  scanf("%d", &num); // Leitura de um numero para a variavel num

  printf("%d\n", num); // Escrita de um numero na variavel num

  return 0; // Codigo para dizer que tudo correu bem
}


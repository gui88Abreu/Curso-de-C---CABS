#include <stdio.h>

#define MAX 30

int
main()
{
  int i;
  char ans, c;
  char letters[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                       's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  printf("Escolha uma letra: ");
  scanf("%c", &ans);

  printf("\nAs letras que aparecem antes de %c sao:\n", ans);

  // Enquanto i nao for maior que 26 e nao estivermos na letra ans
  for (i = 0; i < 26 && letters[i] != ans; i++)
    printf("%c\n", letters[i]);

  return 0;
}

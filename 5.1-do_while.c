#include <stdio.h>

int
main() // Imprime potencias do numero de 0 ate counter
{
  int num, ans, counter;

  scanf("%d %d", &num, &counter);

  ans = 1; // Potencia a 0 eh sempre 1

  do // Sempre repete uma vez
  {
    printf("%d\n", ans);
    ans *= num; // ans = ans * num
    counter--;  // counter = num - 1
  }
  while (counter >= 0); // Enquanto contador for maior ou igual a zero

  return 0;
}

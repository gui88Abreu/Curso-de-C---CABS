#include <stdio.h>

int
main() // Imprime potencias do numero de 0 ate counter
{
  double num, ans;
  int counter;

  scanf("%lf %d", &num, &counter);

  ans = 1; // Potencia a 0 eh sempre 1

  do // Sempre repete uma vez
  {
    printf("%.3lf\n", ans); // %M.N(TIPO)
    ans *= num; // ans = ans * num
    counter--;  // counter = num - 1
  }
  while (counter >= 0); // Enquanto contador for maior ou igual a zero

  return 0;
}

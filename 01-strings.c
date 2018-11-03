#include <string.h>
#include <stdio.h>

int main(){
  char input[30], output[30];
  int len;
  scanf("%[^\n]s", input);
  printf("INPUT: %s\n", input);

  len = strlen(input);
  for (int i = 0, j = len -1; i < len; i++, j--){
    output[i] = input[j];
  }

  printf("OUTPUT: %s\n", output);
  return 0;
}
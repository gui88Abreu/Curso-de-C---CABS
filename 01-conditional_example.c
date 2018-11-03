#include <stdio.h>

int main(){
  int a;

  printf("Input: ");
  scanf("%d", &a);

  if (a%2 == 0){
    printf("Number %d is even ", a);
    if (a > 0)
      printf("and positive\n");
    else
      printf("and negative\n");
  }
  else{
    printf("Number %d is odd\n", a);
    if (a > 0)
      printf("and positive\n");
    else
      printf("and negative\n");
  }
  return 0;
}
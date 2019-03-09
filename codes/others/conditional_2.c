#include <stdio.h>

int main(){
  char a ='\0';

  while(a != 'q' && a != 'Q'){
    a = getchar();
    getchar(); // descarta o caracter \n
    switch (a){
      case 'w':
      case 'W':
        printf("Up\n");
        break;
      case 's':
      case 'S':
        printf("Down\n");
        break;
      case 'a':
      case 'A':
        printf("Left\n");
        break;
      case 'd':
      case 'D':
        printf("Right\n");
        break;
      case 'q':
      case 'Q':
        break;
      default:
        printf("Undefined\n");
    }
  }

  return 0;
}
#include <stdio.h>

int main(void){
  char name[] = "Taro Yamada";
  char initial[5];

  initial[0] = name[0];
  initial[1] = '.';
  initial[2] = name[5];
  initial[3] = '.';
  initial[4] = '\0';
  printf("%s\n", initial);
}

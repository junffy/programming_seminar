#include <stdio.h>

int main(){
  char b;
  int r;
  scanf("%c%d", &b, &r);
  printf("Building %c, Floor %d, Room No.%d\n", b, r/100, r%100);
}
